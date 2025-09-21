@class NSString, NSURL, NSDate;

@interface MOMediaItem : NSObject <NSCopying> {
    unsigned long long _urlHash;
    NSString *_urlNormaliseString;
    char _isRemote;
    char _reloading;
}

@property (readonly, retain, nonatomic) NSString *accessibilityLabel;
@property (readonly, retain, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, retain, nonatomic) NSString *accessibilityRoleDescription;
@property (readonly, nonatomic) NSString *urlNormaliseString;
@property char needsReload;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double aspectRatio;
@property (nonatomic) struct CGSize { double width; double height; } bestResolution;
@property (retain, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSURL *url;

+ (id)cloudThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 andColorSpace:(id)a1 cooked:(char *)a2;
+ (id)operationWithBlock:(id /* block */)a0 cancellationBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (id)thumbnailImagesOperationForMediaItems:(id)a0 withResolution:(unsigned long long)a1 mode:(unsigned long long)a2 placeholder:(char)a3 colorSpace:(id)a4 andCompletionHandler:(id /* block */)a5;
+ (id)unsupportedThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 andColorSpace:(id)a1 cooked:(char *)a2;
+ (id)urlForScheme:(id)a0 host:(id)a1 path:(id)a2;
+ (id)urlForScheme:(id)a0 host:(id)a1 pathComponents:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)invalidate;
- (char)isRemote;
- (void)_reloadProperties;
- (id)accessibilityLabel;
- (id)accessibilityRoleDescription;
- (void)invalidate:(char)a0;
- (unsigned long long)thumbnailVersion;
- (void)_reloadPropertiesIfNeeded;
- (unsigned long long)bestResolutionForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 quality:(double)a2 align:(char)a3;
- (long long)compareForThumbnailOrdering:(id)a0 resolution:(unsigned long long)a1 direction:(unsigned long long)a2 pivot:(id)a3;
- (char)hasThumbnailImageReadyForResolution:(unsigned long long)a0;
- (char)hasThumbnailImageReadyForResolution:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 mode:(unsigned long long)a2 colorSpace:(id)a3;
- (char)hasThumbnailImageReadyForResolution:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 mode:(unsigned long long)a2 colorSpace:(id)a3 readyImage:(out id *)a4 readyImageCooked:(out char *)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbnailContentRectForReason:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)thumbnailImageForResolution:(unsigned long long)a0;
- (id)thumbnailImageForResolution:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 mode:(unsigned long long)a2 colorSpace:(id)a3 cooked:(char *)a4;
- (id)thumbnailImageForResolution:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 mode:(unsigned long long)a2 reason:(unsigned long long)a3 placeholder:(char)a4 colorSpace:(id)a5 cooked:(char *)a6;
- (id)thumbnailImageOperationForResolution:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 mode:(unsigned long long)a2 reason:(unsigned long long)a3 placeholder:(char)a4 colorSpace:(id)a5 withCompletionHandler:(id /* block */)a6;
- (char)thumbnailIsRoundedForReason:(unsigned long long)a0;
- (char)wantsMondrianMemoryCaches:(unsigned long long)a0;

@end
