@interface CRIOServiceController : NSObject

@property (nonatomic) unsigned int service;
@property (nonatomic) unsigned int connection;

- (id)init;
- (void)_closeRepairService;
- (BOOL)_openRepairService;
- (BOOL)assertRepairPin:(BOOL)a0;
- (BOOL)isRepairPinAsserted;

@end
