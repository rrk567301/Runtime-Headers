@class NSData;

@interface CBAccessorySetupMetadata : NSObject

@property (copy, nonatomic) NSData *manufacturerID;
@property (copy, nonatomic) NSData *modelID;
@property (nonatomic) char rssiOffsetProxPairing;

- (void).cxx_destruct;

@end
