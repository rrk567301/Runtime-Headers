@class QLExtension;

@interface QLThumbnailExtensionInfo : NSObject {
    unsigned long long _minimumThumbnailSize;
}

@property (retain) QLExtension *extension;

- (id)description;
- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (BOOL)isThumbnailGeneratorDisabled;
- (unsigned long long)minimumThumbnailSize;
- (void)score:(long long)a0;

@end
