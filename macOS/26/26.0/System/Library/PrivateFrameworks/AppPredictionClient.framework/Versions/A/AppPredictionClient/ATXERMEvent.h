@class ATXEngagementRecordEntry, NSArray, NSString, NSDate;

@interface ATXERMEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) ATXEngagementRecordEntry *entry;
@property (readonly, nonatomic) NSArray *clientModelIds;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)json;
- (id)init;
- (id)jsonDict;
- (id)serialize;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventDate:(id)a0 eventType:(unsigned long long)a1 recordEntry:(id)a2 clientModelIds:(id)a3;
- (BOOL)isEqualToATXERMEvent:(id)a0;

@end
