@class NSDictionary, AVMetadataItemFilterInternal;

@interface AVMetadataItemFilter : NSObject {
    AVMetadataItemFilterInternal *_itemFilterInternal;
}

@property (readonly) NSDictionary *allowList;

+ (id)metadataItemFilterForSharing;

@end
