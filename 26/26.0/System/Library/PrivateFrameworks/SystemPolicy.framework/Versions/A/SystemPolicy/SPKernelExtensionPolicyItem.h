@class NSString, NSArray;

@interface SPKernelExtensionPolicyItem : NSObject <NSSecureCoding> {
    BOOL _originalAllowed;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *developerName;
@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) NSString *applicationPath;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSArray *bundleIDs;
@property (nonatomic, getter=isAllowed) BOOL allowed;
@property (readonly, nonatomic, getter=isRebootRequired) BOOL rebootRequired;
@property (readonly, nonatomic, getter=isModified) BOOL modified;
@property (readonly, nonatomic) BOOL isPendingUpgrade;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithApplication:(id)a0 path:(id)a1 developerName:(id)a2 teamID:(id)a3 bundleIDs:(id)a4 allowed:(BOOL)a5 rebootRequired:(BOOL)a6 isPendingUpgrade:(BOOL)a7;
- (id)initWithDeveloper:(id)a0 teamID:(id)a1 bundleIDs:(id)a2 allowed:(BOOL)a3 rebootRequired:(BOOL)a4 isPendingUpgrade:(BOOL)a5;

@end
