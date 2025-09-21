@class NSString, NSArray;

@interface BMInferredModeEvent : NSObject <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) NSString *modeUUID;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *suggestionUUID;
@property (readonly, nonatomic) long long origin;
@property (readonly, nonatomic) NSString *originBundleId;
@property (readonly, nonatomic) char isAutomationEnabled;
@property (readonly, nonatomic) char isStart;
@property (readonly, nonatomic) char shouldSuggestTriggers;
@property (readonly, nonatomic) unsigned long long uiLocation;
@property (readonly, nonatomic) double confidenceScore;
@property (readonly, nonatomic) NSString *originAnchorType;
@property (readonly, nonatomic) NSArray *serializedTriggers;
@property (readonly, nonatomic) unsigned long long modeType;
@property (readonly, nonatomic) NSString *userModeName;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithAbsoluteTimestamp:(double)a0 modeIdentifier:(id)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 isAutomationEnabled:(char)a5 uiLocation:(unsigned long long)a6 isStart:(char)a7 confidenceScore:(double)a8 uuid:(id)a9 serializedTriggers:(id)a10;
- (id)initWithAbsoluteTimestamp:(double)a0 modeIdentifier:(id)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 isAutomationEnabled:(char)a5 uiLocation:(unsigned long long)a6 isStart:(char)a7 confidenceScore:(double)a8 uuid:(id)a9 serializedTriggers:(id)a10 modeType:(unsigned long long)a11;
- (id)initWithAbsoluteTimestamp:(double)a0 modeUUID:(id)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 isAutomationEnabled:(char)a5 uiLocation:(unsigned long long)a6 isStart:(char)a7 confidenceScore:(double)a8 suggestionUUID:(id)a9 serializedTriggers:(id)a10 modeType:(unsigned long long)a11;
- (id)initWithAbsoluteTimestamp:(double)a0 modeUUID:(id)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 isAutomationEnabled:(char)a5 uiLocation:(unsigned long long)a6 isStart:(char)a7 confidenceScore:(double)a8 suggestionUUID:(id)a9 serializedTriggers:(id)a10 shouldSuggestTriggers:(char)a11 modeType:(unsigned long long)a12;
- (id)initWithAbsoluteTimestamp:(double)a0 modeUUID:(id)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 isAutomationEnabled:(char)a5 uiLocation:(unsigned long long)a6 isStart:(char)a7 confidenceScore:(double)a8 suggestionUUID:(id)a9 serializedTriggers:(id)a10 shouldSuggestTriggers:(char)a11 modeType:(unsigned long long)a12 userModeName:(id)a13;
- (id)initWithProto:(id)a0;

@end
