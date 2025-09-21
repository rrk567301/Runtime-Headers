@class PKOSVersionRequirementRange;

@interface PKWebServiceProvisioningCardReaderNetworkConfiguration : NSObject

@property (readonly, nonatomic) long long network;
@property (readonly, nonatomic) BOOL blocked;
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRange;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
