@class NSNumber;

@interface ATXAppDirectoryEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *bundleIdInTopAppsVisible;
@property (retain, nonatomic) NSNumber *userLaunchedAppBeforeLeaving;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDict;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithBundleIdInTopAppsVisible:(id)a0 userLaunchedAppBeforeLeaving:(id)a1;
- (char)isEqualToATXAppDirectoryEventMetadata:(id)a0;

@end
