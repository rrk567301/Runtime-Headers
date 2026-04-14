@class NSString;

@interface PKSEConsistencyCheckDeviceCredentialISO18013Properties : NSObject

@property (readonly, nonatomic) BOOL hasKeyMeterial;
@property (readonly, nonatomic) BOOL requireKeySync;
@property (readonly, nonatomic) NSString *isoIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
