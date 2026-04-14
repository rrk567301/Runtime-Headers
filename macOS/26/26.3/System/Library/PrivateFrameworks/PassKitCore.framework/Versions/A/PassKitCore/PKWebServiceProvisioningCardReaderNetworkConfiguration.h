@class PKOSVersionRequirementRange;

@interface PKWebServiceProvisioningCardReaderNetworkConfiguration : NSObject

@property (readonly, nonatomic) long long network;
@property (readonly, nonatomic) BOOL blocked;
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRange;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
