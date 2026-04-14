@class NSArray, NSImage;

@interface _WBSBookmarkFolderTouchIconProviderInfo : NSObject

@property (readonly, copy, nonatomic) NSArray *thumbnailImages;
@property (readonly, copy, nonatomic) NSArray *backgroundColors;
@property (readonly, nonatomic) NSImage *touchIcon;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithThumbnailImages:(id)a0 backgroundColors:(id)a1 touchIcon:(id)a2;

@end
