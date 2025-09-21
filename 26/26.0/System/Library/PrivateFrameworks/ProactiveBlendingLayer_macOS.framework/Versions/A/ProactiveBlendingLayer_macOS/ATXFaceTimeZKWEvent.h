@class NSUUID, NSArray, NSString, NSDate;

@interface ATXFaceTimeZKWEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol> {
    double _absoluteDate;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSUUID *blendingCacheId;
@property (retain, nonatomic) NSArray *suggestionIds;
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sessionProcessingOptionsForSessionType:(long long)a0;
- (id)sessionIdentifierForSessionType:(long long)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)a0;
- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void)updateUIFeedbackSession:(id)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)serialize;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithEventType:(unsigned long long)a0 date:(id)a1 blendingCacheId:(id)a2 suggestionIds:(id)a3;

@end
