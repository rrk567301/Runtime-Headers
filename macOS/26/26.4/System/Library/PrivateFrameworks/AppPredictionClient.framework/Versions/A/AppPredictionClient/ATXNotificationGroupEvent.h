@class NSUUID, NSString, NSDate;

@interface ATXNotificationGroupEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)serialize;
- (void).cxx_destruct;
- (id)json;
- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (id)initWithEventType:(long long)a0 uuid:(id)a1 eventDate:(id)a2;

@end
