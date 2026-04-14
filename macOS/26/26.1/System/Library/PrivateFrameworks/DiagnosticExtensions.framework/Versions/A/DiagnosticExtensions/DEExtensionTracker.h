@interface DEExtensionTracker : NSObject

+ (id)userDefaults;
+ (void)checkIn;
+ (BOOL)shouldTeardownWithIdentifier:(id)a0 session:(id)a1;
+ (BOOL)shouldSetupWithIdentifier:(id)a0 session:(id)a1 expirationDate:(id)a2;
+ (void)decreaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)updateExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)saveCurrentLoggingExtensionsWithDictionary:(id)a0;
+ (void)increaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (BOOL)hasInactiveLoggingSession:(id)a0;
+ (void)extensionTrackerCleanup;
+ (id)currentLoggingExtensions;
+ (id)criteria:(id)a0;
+ (id)sharedSerialQueue;
+ (void)scheduleXPCActivity;
+ (void)_updateExtensionExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)_updateXPCActivityDate;
+ (void)updateRetainCountWithIdentifier:(id)a0 session:(id)a1 offsetBy:(int)a2;
+ (double)xpcActivityTimeInterval;

@end
