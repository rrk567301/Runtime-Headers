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

- (BOOL)isBundleActiveComplication:(id)a0;
- (void)meteringStartedOnComplication:(id)a0 costDictionary:(id)a1 onDate:(id)a2;
- (int)remainingPushesOnComplication:(id)a0 andReduceBy:(id)a1;
- (void)meteringStoppedOnComplication:(id)a0 costDictionary:(id)a1 onDate:(id)a2;
- (void)readOutActiveComplications;
- (BOOL)admissionCheckOnComplication:(id)a0 forRemote:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;
- (int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)a0;
- (id)initForComplications;

@end
