@interface DEExtensionTracker : NSObject

+ (void)decreaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (id)userDefaults;
+ (void)checkIn;
+ (void)_updateXPCActivityDate;
+ (void)updateRetainCountWithIdentifier:(id)a0 session:(id)a1 offsetBy:(int)a2;
+ (BOOL)shouldTeardownWithIdentifier:(id)a0 session:(id)a1;
+ (void)extensionTrackerCleanup;
+ (BOOL)shouldSetupWithIdentifier:(id)a0 session:(id)a1 expirationDate:(id)a2;
+ (void)scheduleXPCActivity;
+ (id)currentLoggingExtensions;
+ (id)criteria:(id)a0;
+ (void)_updateExtensionExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (BOOL)hasInactiveLoggingSession:(id)a0;
+ (void)increaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)updateExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (id)sharedSerialQueue;
+ (double)xpcActivityTimeInterval;
+ (void)saveCurrentLoggingExtensionsWithDictionary:(id)a0;

@end
