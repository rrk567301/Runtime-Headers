@class QLExtension;

@interface QLThumbnailExtensionInfo : NSObject {
    unsigned long long _minimumThumbnailSize;
}

@property (retain) QLExtension *extension;

- (id)initWithExtension:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isThumbnailGeneratorDisabled;
- (unsigned long long)minimumThumbnailSize;
- (void)score:(long long)a0;

@end
