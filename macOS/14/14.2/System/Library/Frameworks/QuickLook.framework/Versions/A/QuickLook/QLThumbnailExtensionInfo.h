@class QLExtension, NSString;

@interface QLThumbnailExtensionInfo : NSObject <QLThumbnailGeneratorInfo> {
    unsigned long long _minimumThumbnailSize;
}

@property (retain) QLExtension *extension;
@property (readonly) BOOL isThumbnailGeneratorDisabled;
@property (readonly) unsigned long long minimumThumbnailSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
