@class NSString, ATXMissedNotificationRanking;

@interface ATXMissedNotificationRankingLoggingEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (retain, nonatomic) ATXMissedNotificationRanking *missedNotificationRanking;
@property (nonatomic) long long eventType;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encodeAsProto;
- (id)initFromJSON:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)jsonRepresentation;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithMissedNotificationRanking:(id)a0 eventType:(long long)a1 timestamp:(double)a2;

@end
