@class NSMutableDictionary, NSString, NSXPCConnection, ACDAccountStoreFilter, NSSet, NSNumber, NSArray;

@interface ACDClient : NSObject {
    struct __CFBundle { } *_bundle;
    NSString *_bundleID;
    BOOL _didManuallySetBundleID;
    NSNumber *_pid;
    NSString *_localizedAppName;
    NSString *_name;
    NSMutableDictionary *_entitlementChecks;
    NSSet *_monitoredAccountTypes;
    NSArray *_prefetchedProperties;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientPropertyLock;
}

@property (retain) NSString *bundleID;
@property (readonly) struct __CFBundle { } *bundle;
@property (readonly) NSString *localizedAppName;
@property (readonly) NSString *adamOrDisplayID;
@property (readonly) NSString *name;
@property (readonly) NSNumber *pid;
@property (readonly) NSXPCConnection *connection;
@property (retain) ACDAccountStoreFilter *filter;
@property (retain) NSSet *monitoredAccountTypes;
@property (retain) NSArray *prefetchedProperties;

+ (id)clientWithBundleID:(id)a0;
+ (id)_bundleForNonPlugInPID:(int)a0;
+ (id)_bundleIDForPID:(int)a0;
+ (id)_bundleForPID:(int)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (id)_displayNameFromBundleInfoDictionaryForPID:(int)a0;
- (id)_rawValueForEntitlement:(id)a0;

@end
