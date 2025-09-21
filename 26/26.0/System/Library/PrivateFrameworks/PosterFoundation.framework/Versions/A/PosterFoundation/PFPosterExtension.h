@class NSUUID, NSString, NSData, RBSProcessIdentity, NSSet, LSApplicationExtensionRecord, NSBundle, _EXExtensionIdentity, LSPropertyList, _EXHostConfiguration;

@interface PFPosterExtension : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _EXHostConfiguration *_hostConfiguration;
    RBSProcessIdentity *_processIdentity;
    LSApplicationExtensionRecord *_record;
}

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) _EXExtensionIdentity *identity;
@property (readonly, nonatomic) NSString *posterExtensionBundleIdentifier;
@property (readonly, nonatomic) NSString *posterExtensionContainerBundleIdentifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) LSPropertyList *posterExtensionInfoPlist;
@property (readonly, nonatomic) LSPropertyList *posterExtensionEntitlementsPlist;
@property (readonly, nonatomic) NSData *persistentIdentifier;
@property (readonly, nonatomic) NSBundle *posterExtensionBundle;
@property (readonly, nonatomic) NSSet *supportedRoles;

+ (id)extensionWithIdentity:(id)a0;

- (id)initWithIdentity:(id)a0;
- (id)instanceIdentifier;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)applicationExtensionRecord;

@end
