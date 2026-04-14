@class NSNumber;

@interface ATXAppDirectoryEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *bundleIdInTopAppsVisible;
@property (retain, nonatomic) NSNumber *userLaunchedAppBeforeLeaving;

- (id)jsonDict;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithProto:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdInTopAppsVisible:(id)a0 userLaunchedAppBeforeLeaving:(id)a1;
- (BOOL)isEqualToATXAppDirectoryEventMetadata:(id)a0;

@end
