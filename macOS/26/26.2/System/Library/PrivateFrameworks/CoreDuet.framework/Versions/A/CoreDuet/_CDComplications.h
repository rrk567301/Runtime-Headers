@class NSMutableDictionary, NSDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface _CDComplications : NSObject {
    NSObject<OS_dispatch_queue> *complicationQueue;
    int deviceChangeToken;
    NSUserDefaults *pushLimits;
    NSMutableDictionary *meterTokens;
}

@property (copy) NSDictionary *activeComplications;

+ (id)sharedComplication;
+ (id)initializeForAdmissionChecking:(BOOL)a0;

- (int)remainingPushesOnComplication:(id)a0 andReduceBy:(id)a1;
- (void)meteringStartedOnComplication:(id)a0 costDictionary:(id)a1 onDate:(id)a2;
- (BOOL)admissionCheckOnComplication:(id)a0 forRemote:(BOOL)a1 error:(id *)a2;
- (BOOL)isBundleActiveComplication:(id)a0;
- (void).cxx_destruct;
- (id)initForComplications;
- (void)meteringStoppedOnComplication:(id)a0 costDictionary:(id)a1 onDate:(id)a2;
- (void)readOutActiveComplications;
- (int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)a0;

@end
