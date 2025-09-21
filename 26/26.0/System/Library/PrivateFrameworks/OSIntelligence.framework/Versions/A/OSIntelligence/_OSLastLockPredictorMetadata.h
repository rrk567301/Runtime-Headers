@class NSString;

@interface _OSLastLockPredictorMetadata : NSObject <NSSecureCoding, _OSLastLockPredictorMetadataProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *predictorType;
@property (copy, nonatomic) NSString *queryingMechanism;
@property (nonatomic) double recommendedRequeryTime;
@property (nonatomic) double longThreshold;
@property (nonatomic) double confidenceThresholdStrict;
@property (nonatomic) double confidenceThresholdRelaxed;
@property (nonatomic) BOOL requireEnoughHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtocolConformer:(id)a0;

@end
