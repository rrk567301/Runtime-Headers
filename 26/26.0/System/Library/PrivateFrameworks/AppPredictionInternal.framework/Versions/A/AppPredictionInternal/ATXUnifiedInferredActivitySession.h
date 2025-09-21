@class NSString;

@interface ATXUnifiedInferredActivitySession : NSObject <BMStoreData, NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) unsigned long long inferredActivityType;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initFromJSON:(id)a0;
- (id)encodeAsProto;
- (id)jsonRepresentation;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)serialize;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)prettyRepresentation;
- (id)initFromStartTime:(double)a0 endTime:(double)a1 source:(id)a2 activityType:(unsigned long long)a3 confidence:(double)a4;
- (BOOL)isEqualToATXUnifiedInferredActivitySession:(id)a0;

@end
