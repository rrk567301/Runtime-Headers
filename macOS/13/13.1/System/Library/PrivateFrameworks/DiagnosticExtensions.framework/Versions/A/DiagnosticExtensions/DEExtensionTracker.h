@interface DEExtensionTracker : NSObject

+ (id)userDefaults;
+ (void)checkIn;
+ (BOOL)shouldSetupWithIdentifier:(id)a0 session:(id)a1 expirationDate:(id)a2;
+ (BOOL)shouldTeardownWithIdentifier:(id)a0 session:(id)a1;
+ (id)currentLoggingExtensions;
+ (void)saveCurrentLoggingExtensionsWithDictionary:(id)a0;
+ (BOOL)hasInactiveLoggingSession:(id)a0;
+ (id)sharedSerialQueue;
+ (void)updateExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)_updateExtensionExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)_updateXPCActivityDate;
+ (double)xpcActivityTimeInterval;
+ (id)criteria:(id)a0;
+ (void)scheduleXPCActivity;
+ (void)extensionTrackerCleanup;
+ (void)increaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)decreaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)updateRetainCountWithIdentifier:(id)a0 session:(id)a1 offsetBy:(int)a2;

@end
