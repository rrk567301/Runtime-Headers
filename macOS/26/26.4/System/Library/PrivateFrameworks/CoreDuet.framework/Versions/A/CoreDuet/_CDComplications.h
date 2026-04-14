@class NSMutableDictionary, NSDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface _CDComplications : NSObject {
    NSObject<OS_dispatch_queue> *complicationQueue;
    int deviceChangeToken;
    NSUserDefaults *pushLimits;
    NSMutableDictionary *meterTokens;
}

@property (copy) NSDictionary *activeComplications;

+ (id)initializeForAdmissionChecking:(BOOL)a0;
+ (id)sharedComplication;

- (int)remainingPushesOnComplication:(id)a0 andReduceBy:(id)a1;
- (void)meteringStartedOnComplication:(id)a0 costDictionary:(id)a1 onDate:(id)a2;
- (int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)a0;
- (BOOL)isBundleActiveComplication:(id)a0;
- (id)initForComplications;
- (void).cxx_destruct;
- (void)readOutActiveComplications;
- (void)meteringStoppedOnComplication:(id)a0 costDictionary:(id)a1 onDate:(id)a2;
- (BOOL)admissionCheckOnComplication:(id)a0 forRemote:(BOOL)a1 error:(id *)a2;

@end
