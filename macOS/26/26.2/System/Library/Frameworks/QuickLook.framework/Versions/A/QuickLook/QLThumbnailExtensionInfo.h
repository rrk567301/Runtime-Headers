@class QLExtension;

@interface QLThumbnailExtensionInfo : NSObject {
    unsigned long long _minimumThumbnailSize;
}

@property (retain) QLExtension *extension;

- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isThumbnailGeneratorDisabled;
- (unsigned long long)minimumThumbnailSize;
- (void)score:(long long)a0;

@end
