@class NSString, ATXUserNotificationDigest;

@interface ATXUserNotificationDigestLoggingEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData>

@property (class, readonly) char supportsSecureCoding;
@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (retain, nonatomic) ATXUserNotificationDigest *notificationDigest;
@property (nonatomic) long long eventType;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)jsonRepresentation;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initFromJSON:(id)a0;
- (id)initWithNotificationDigest:(id)a0 eventType:(long long)a1 timestamp:(double)a2;

@end
