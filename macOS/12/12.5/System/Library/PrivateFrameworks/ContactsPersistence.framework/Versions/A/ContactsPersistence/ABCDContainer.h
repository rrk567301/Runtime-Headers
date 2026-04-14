@class NSString, NSURL, ABCDContainerPermissions, NSDate;

@interface ABCDContainer : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *name;
@property (readonly) long long type;
@property (readonly, copy) NSURL *persistentStoreURL;
@property (readonly, copy) NSString *persistentStoreIdentifier;
@property (readonly, copy) ABCDContainerPermissions *permissions;
@property (readonly, getter=isGuardianRestricted) BOOL guardianRestricted;
@property (readonly) int iOSLegacyIdentifier;
@property (readonly, copy) NSDate *lastSyncDate;

+ (id)makeDefaultContainerPermissions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2 persistentStoreURL:(id)a3 persistentStoreIdentifier:(id)a4 permissions:(id)a5 guardianRestricted:(BOOL)a6 lastSyncDate:(id)a7 iOSLegacyIdentifier:(int)a8;
- (id)initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2 persistentStoreURL:(id)a3 persistentStoreIdentifier:(id)a4 iOSLegacyIdentifier:(int)a5;

@end
