@class NSUUID, NSString, NSDate;

@interface ATXNotificationSuggestionInteractionEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) long long suggestionType;
@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSUUID *suggestionUUID;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)jsonRawData;
- (BOOL)isEqualToATXNotificationSuggestionInteractionEvent:(id)a0;
- (id)serialize;
- (BOOL)eventCausesSuggestionInactivity;
- (BOOL)isEqual:(id)a0;
- (id)initWithSuggestionType:(long long)a0 eventType:(long long)a1 suggestionUUID:(id)a2 eventDate:(id)a3;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)json;

@end
