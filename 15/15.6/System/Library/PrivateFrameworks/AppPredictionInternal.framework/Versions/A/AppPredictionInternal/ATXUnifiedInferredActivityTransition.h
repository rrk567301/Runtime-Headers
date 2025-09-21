@class NSString;

@interface ATXUnifiedInferredActivityTransition : NSObject <BMStoreData, ATXTimedEventProtocol, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSSecureCoding>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double transitionTime;
@property (readonly, nonatomic) char isEntryEvent;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) unsigned long long inferredActivityType;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)serialize;
- (id)eventTime;
- (id)jsonRepresentation;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initFromJSON:(id)a0;
- (unsigned long long)activityTypeAfterTransition;
- (id)initFromTransitionTime:(double)a0 isEntryEvent:(char)a1 source:(id)a2 activityType:(unsigned long long)a3 confidence:(double)a4;
- (id)initFromTransitionTime:(double)a0 isEntryEvent:(char)a1 source:(id)a2 mode:(id)a3;
- (id)initWithCoder_v1:(id)a0;
- (id)initWithCoder_v2:(id)a0;
- (char)isEqualToATXUnifiedInferredActivityTransition:(id)a0;
- (id)prettyRepresentation;

@end
