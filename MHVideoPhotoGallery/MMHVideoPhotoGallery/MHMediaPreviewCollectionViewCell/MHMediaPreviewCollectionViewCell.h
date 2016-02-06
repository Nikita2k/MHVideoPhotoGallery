//
//  MHGalleryCells.h
//  MHVideoPhotoGallery
//
//  Created by Mario Hahn on 30.12.13.
//  Copyright (c) 2013 Mario Hahn. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MHGalleryItem;

@protocol MHMediaPreviewCollectionViewCellDelegate

- (void)imageForItem:(MHGalleryItem *)item inImageView:(UIImageView *)imageView completionBlock:(void (^)(UIImage *, NSError *))completionBlock;

@end

@interface MHMediaPreviewCollectionViewCell : UICollectionViewCell

@property (nonatomic, weak) id<MHMediaPreviewCollectionViewCellDelegate> delegate;

@property (nonatomic, strong) UIImageView             *thumbnail;
@property (nonatomic, strong) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, strong) UIButton                *playButton;
@property (nonatomic, strong) UILabel                 *videoDurationLength;
@property (nonatomic, strong) UIImageView             *videoIcon;
@property (nonatomic, strong) UIView                  *videoGradient;
@property (nonatomic, strong) UIImageView             *selectionImageView;
@property (nonatomic, strong) MHGalleryItem           *galleryItem;

@property (nonatomic, copy) void (^saveImage)(BOOL shouldSave);
@end
