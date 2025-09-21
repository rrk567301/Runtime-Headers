@class QLExtension;

@interface QLThumbnailExtensionInfo : NSObject {
    unsigned long long _minimumThumbnailSize;
}

@property (retain) QLExtension *extension;

- (id)description;
- (void).cxx_destruct;
- (id)initWithExtension:(id)a0;
- (char)isThumbnailGeneratorDisabled;
- (unsigned long long)minimumThumbnailSize;
- (void)score:(long long)a0;

@end
