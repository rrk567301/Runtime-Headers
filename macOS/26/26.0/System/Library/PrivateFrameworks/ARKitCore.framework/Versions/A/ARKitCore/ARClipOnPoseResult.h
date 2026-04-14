@class NSString, NSDictionary;

@interface ARClipOnPoseResult : NSObject <ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } leftClipOnPose;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } rightClipOnPose;
@property (readonly, nonatomic) BOOL leftIsSuccess;
@property (readonly, nonatomic) BOOL rightIsSuccess;
@property (readonly, nonatomic) float leftResidualError;
@property (readonly, nonatomic) float rightResidualError;
@property (readonly, copy, nonatomic) NSString *rxUUID;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)resourceKey;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLeftClipOnPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 rightClipOnPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 leftIsSuccess:(BOOL)a2 rightIsSuccess:(BOOL)a3 leftResidualError:(float)a4 rightResidualError:(float)a5 rxUUID:(id)a6;

@end
