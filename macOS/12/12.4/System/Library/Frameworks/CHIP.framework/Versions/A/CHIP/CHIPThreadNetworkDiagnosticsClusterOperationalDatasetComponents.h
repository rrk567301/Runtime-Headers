@class NSNumber;

@interface CHIPThreadNetworkDiagnosticsClusterOperationalDatasetComponents : NSObject

@property (retain, nonatomic) NSNumber *activeTimestampPresent;
@property (retain, nonatomic) NSNumber *pendingTimestampPresent;
@property (retain, nonatomic) NSNumber *masterKeyPresent;
@property (retain, nonatomic) NSNumber *networkNamePresent;
@property (retain, nonatomic) NSNumber *extendedPanIdPresent;
@property (retain, nonatomic) NSNumber *meshLocalPrefixPresent;
@property (retain, nonatomic) NSNumber *delayPresent;
@property (retain, nonatomic) NSNumber *panIdPresent;
@property (retain, nonatomic) NSNumber *channelPresent;
@property (retain, nonatomic) NSNumber *pskcPresent;
@property (retain, nonatomic) NSNumber *securityPolicyPresent;
@property (retain, nonatomic) NSNumber *channelMaskPresent;

- (id)init;
- (void).cxx_destruct;

@end
