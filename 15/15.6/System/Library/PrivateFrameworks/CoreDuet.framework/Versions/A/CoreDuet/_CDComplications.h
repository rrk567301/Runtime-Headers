@class NSMutableDictionary, NSDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface _CDComplications : NSObject {
    NSObject<OS_dispatch_queue> *complicationQueue;
    int deviceChangeToken;
    NSUserDefaults *pushLimits;
    NSMutableDictionary *meterTokens;
}

@property (copy) NSDictionary *activeComplications;

+ (id)initializeForAdmissionChecking:(char)a0;
+ (id)sharedComplication;

- (void).cxx_destruct;
- (char)admissionCheckOnComplication:(id)a0 forRemote:(char)a1 error:(id *)a2;
- (id)initForComplications;
- (char)isBundleActiveComplication:(id)a0;
- (void)meteringStartedOnComplication:(id)a0 costDictionary:(id)a1 onDate:(id)a2;
- (void)meteringStoppedOnComplication:(id)a0 costDictionary:(id)a1 onDate:(id)a2;
- (void)readOutActiveComplications;
- (int)remainingPushesOnComplication:(id)a0 andReduceBy:(id)a1;
- (int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)a0;

@end
