@class QLTGeneratorThumbnailRequest, NSArray, NSDictionary, QLThumbnailItem, NSError, QLThumbnailMetadata;

@interface QLThumbnailExtensionGenerator : NSObject {
    void /* unknown type, empty encoding */ operation;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (void)generateThumbnailWithThumbnailRequest:(QLTGeneratorThumbnailRequest *)a0 item:(QLThumbnailItem *)a1 flavor:(int)a2 wantsLowQuality:(BOOL)a3 generationData:(NSDictionary *)a4 completionHandler:(void (^)(NSArray *, QLThumbnailMetadata *, NSError *))a5;

@end
