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
- (BOOL)initForRouterID:(unsigned char)a0;
- (BOOL)executeIECSCommand:(unsigned int)a0 withData:(char *)a1 dataLength:(unsigned int)a2;
- (BOOL)disableDFUfTaskIfActive;
- (BOOL)retimerEnterDFU;
- (BOOL)dfufTaskRunning;
- (void)retimerExitDFU;
- (BOOL)retimerForcePower;
- (BOOL)retimerRemoveForcePower;
- (BOOL)retimerExitForceDFU;
- (BOOL)retimerEnterForceDFU:(BOOL)a0;

@end
