@class NSString, NSArray;

@interface ATXUserNotificationAppDigest : NSObject <ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSArray *appMarqueeGroups;
@property (readonly, nonatomic) NSArray *nonAppMarqueeGroups;
@property (readonly, nonatomic) NSArray *groups;

- (id)initFromJSON:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (id)initWithProto:(id)a0;
- (id)jsonRepresentation;
- (id)initWithBundleId:(id)a0 appMarqueeGroups:(id)a1 nonAppMarqueeGroups:(id)a2;

@end
