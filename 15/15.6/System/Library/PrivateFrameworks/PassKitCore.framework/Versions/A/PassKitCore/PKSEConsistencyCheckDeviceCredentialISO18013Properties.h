@class NSString;

@interface PKSEConsistencyCheckDeviceCredentialISO18013Properties : NSObject

@property (readonly, nonatomic) char hasKeyMeterial;
@property (readonly, nonatomic) char requireKeySync;
@property (readonly, nonatomic) NSString *isoIdentifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
