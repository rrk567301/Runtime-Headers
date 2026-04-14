@class NSError, BYRequest, NSMutableArray;

@interface BYOperationController : NSObject

@property (retain) BYRequest *request;
@property (retain) NSMutableArray *operations;
@property (retain) NSError *error;

- (id)initWithRequest:(id)a0;
- (void)_addOperation:(id)a0;
- (void).cxx_destruct;
- (unsigned int)_createPowerAssertion;
- (void)_releasePowerAssertion:(unsigned int)a0;
- (void)_runOperationsWithDescription:(id)a0;
- (id)_stringForSecurityMode:(unsigned int)a0;
- (id)makeVolumeBootable;
- (id)prepareVolumeForMediumSecuritySoftwareUpdate;

@end
