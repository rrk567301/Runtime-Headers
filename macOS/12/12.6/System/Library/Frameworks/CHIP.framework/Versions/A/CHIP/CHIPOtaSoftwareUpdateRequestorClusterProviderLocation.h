@class NSNumber;

@interface CHIPOtaSoftwareUpdateRequestorClusterProviderLocation : NSObject

@property (retain, nonatomic) NSNumber *providerNodeID;
@property (retain, nonatomic) NSNumber *endpoint;
@property (retain, nonatomic) NSNumber *fabricIndex;

- (id)init;
- (void).cxx_destruct;

@end
