@interface DEExtensionTracker : NSObject

+ (void)checkIn;
+ (id)sharedSerialQueue;
+ (id)criteria:(id)a0;
+ (id)userDefaults;
+ (void)_updateXPCActivityDate;
+ (void)updateRetainCountWithIdentifier:(id)a0 session:(id)a1 offsetBy:(int)a2;
+ (double)xpcActivityTimeInterval;
+ (id)currentLoggingExtensions;
+ (BOOL)shouldSetupWithIdentifier:(id)a0 session:(id)a1 expirationDate:(id)a2;
+ (void)_updateExtensionExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)decreaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)extensionTrackerCleanup;
+ (BOOL)shouldTeardownWithIdentifier:(id)a0 session:(id)a1;
+ (BOOL)hasInactiveLoggingSession:(id)a0;
+ (void)scheduleXPCActivity;
+ (void)updateExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)saveCurrentLoggingExtensionsWithDictionary:(id)a0;
+ (void)increaseRetainCountWithIdentifier:(id)a0 session:(id)a1;

@end
