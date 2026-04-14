@interface DEExtensionTracker : NSObject

+ (void)checkIn;
+ (double)xpcActivityTimeInterval;
+ (void)scheduleXPCActivity;
+ (void)updateRetainCountWithIdentifier:(id)a0 session:(id)a1 offsetBy:(int)a2;
+ (id)currentLoggingExtensions;
+ (void)saveCurrentLoggingExtensionsWithDictionary:(id)a0;
+ (BOOL)shouldTeardownWithIdentifier:(id)a0 session:(id)a1;
+ (void)decreaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)increaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)extensionTrackerCleanup;
+ (void)_updateExtensionExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (BOOL)hasInactiveLoggingSession:(id)a0;
+ (BOOL)shouldSetupWithIdentifier:(id)a0 session:(id)a1 expirationDate:(id)a2;
+ (id)criteria:(id)a0;
+ (id)userDefaults;
+ (void)_updateXPCActivityDate;
+ (void)updateExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (id)sharedSerialQueue;

@end
