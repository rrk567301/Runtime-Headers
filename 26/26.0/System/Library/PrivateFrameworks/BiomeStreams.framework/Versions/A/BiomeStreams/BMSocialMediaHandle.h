@class NSString;

@interface BMSocialMediaHandle : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *handle;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 handle:(id)a1;

@end
