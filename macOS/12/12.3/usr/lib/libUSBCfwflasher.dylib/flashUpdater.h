@class NSEnumerator, NSMutableDictionary, NSString;
@protocol flasher;

@interface flashUpdater : NSObject {
    NSMutableDictionary *locatedDevices;
    NSEnumerator *locatedDeviceEnumerator;
    id<flasher> currentDevice;
    unsigned int fConnection;
    BOOL fRetriesEnabled;
    BOOL fGAIDEnabled;
    NSString *fUpcomingFirmwareVersionStash;
}

+ (id)sharedInstance:(id *)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset:(id *)a0;
- (int)releasePowerAssertion:(unsigned int)a0;
- (void)next:(id *)a0;
- (int)takePowerAssertion:(unsigned int *)a0;
- (BOOL)enableDisableRetries:(BOOL)a0;
- (BOOL)enableDisableGAID:(BOOL)a0;
- (BOOL)stashFirmwareVersionInFile:(id)a0;
- (BOOL)isDone:(id *)a0;
- (id)locatedDevices;
- (BOOL)updaterSupported:(id *)a0;
- (id)initWithOptions:(id)a0 andErrorResponse:(id *)a1;
- (BOOL)execCmd:(id)a0 withInput:(id)a1 andOutput:(id)a2 andErrorResponse:(id *)a3;
- (BOOL)catalogIECSDevices:(id *)a0;
- (BOOL)catalogSWDDevices:(id *)a0;
- (BOOL)selectUpdaterWithRID:(id)a0;

@end
