@interface OspreyChannelRequestOptions : NSObject

@property (nonatomic, getter=isCompressionEnabled) char compressionEnabled;
@property (nonatomic) char forceHTTPv2;

- (id)init;
- (void)applyToOspreyMutableRequest:(id)a0;

@end
