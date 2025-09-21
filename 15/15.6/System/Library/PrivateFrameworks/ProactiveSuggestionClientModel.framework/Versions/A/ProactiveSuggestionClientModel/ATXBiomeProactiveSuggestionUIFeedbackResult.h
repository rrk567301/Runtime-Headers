@class NSString, NSUUID, NSArray, NSDate;

@interface ATXBiomeProactiveSuggestionUIFeedbackResult : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) NSUUID *blendingUICacheUpdateUUID;
@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSDate *clientModelCacheCreationDate;
@property (readonly, nonatomic) unsigned char consumerSubType;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) NSDate *sessionEndDate;
@property (readonly, nonatomic) NSArray *shownSuggestions;
@property (readonly, nonatomic) NSArray *engagedSuggestions;
@property (readonly, nonatomic) NSArray *rejectedSuggestions;
@property (readonly, nonatomic) long long suggestionExecutableType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithProactiveSuggestionUIFeedbackResult:(id)a0;
- (id)initWithSessionId:(id)a0 blendingUICacheUpdateUUID:(id)a1 clientModelId:(id)a2 clientModelCacheCreationDate:(id)a3 consumerSubType:(unsigned char)a4 sessionStartDate:(id)a5 sessionEndDate:(id)a6 shownSuggestions:(id)a7 engagedSuggestions:(id)a8 rejectedSuggestions:(id)a9;
- (char)isEqualToATXBiomeProactiveSuggestionUIFeedbackResult:(id)a0;

@end
