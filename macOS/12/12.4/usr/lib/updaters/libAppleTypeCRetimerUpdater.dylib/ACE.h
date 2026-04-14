@class NSString, IECSInterface, NSObject;
@protocol OS_os_log;

@interface ACE : NSObject {
    IECSInterface *_interface;
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSString *chipInfo;

+ (id)availableRouterIDs;

- (void).cxx_destruct;
- (BOOL)executeTask:(id)a0;
- (id)initWithRouterID:(unsigned char)a0;
- (BOOL)retimerForcePower;
- (BOOL)retimerEnterDFU;
- (BOOL)retimerRemoveForcePower;
- (BOOL)retimerExitForceDFU;
- (BOOL)initForRouterID:(unsigned char)a0;
- (BOOL)dfufTaskRunning;
- (BOOL)retimerEnterForceDFU:(BOOL)a0;
- (BOOL)disableDFUfTaskIfActive;
- (BOOL)executeIECSCommand:(unsigned int)a0 withData:(char *)a1 dataLength:(unsigned int)a2;
- (void)retimerExitDFU;

@end
