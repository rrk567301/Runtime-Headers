@class AppleTypeCRetimerHPM, NSString, NSObject, IECSInterface_GoldRestore2;
@protocol OS_os_log;

@interface ACE : NSObject {
    IECSInterface_GoldRestore2 *_interface;
    NSObject<OS_os_log> *_log;
    unsigned char _routerID;
    AppleTypeCRetimerHPM *_hpm;
    char _isForceDFUModeEnabled;
}

@property (readonly) NSString *chipInfo;

+ (id)availableRouterIDs;

- (void).cxx_destruct;
- (char)executeTask:(id)a0;
- (int)retimerEnterDFU;
- (char)dfufTaskRunning;
- (char)disableDFUfTaskIfActive;
- (char)executeIECSCommand:(unsigned int)a0 withData:(char *)a1 dataLength:(unsigned int)a2;
- (char)initForRouterID:(unsigned char)a0;
- (id)initWithRouterID:(unsigned char)a0;
- (char)retimerEnterDFULegacy;
- (char)retimerEnterForceDFU:(char)a0;
- (void)retimerExitDFU;
- (char)retimerExitForceDFU;
- (int)retimerForcePower;
- (char)retimerRemoveForcePower;

@end
