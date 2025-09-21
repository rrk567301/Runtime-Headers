@class NSString, NSArray;

@interface SPKernelExtensionPolicyItem : NSObject <NSSecureCoding> {
    char _originalAllowed;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *developerName;
@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) NSString *applicationPath;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSArray *bundleIDs;
@property (nonatomic, getter=isAllowed) char allowed;
@property (readonly, nonatomic, getter=isRebootRequired) char rebootRequired;
@property (readonly, nonatomic, getter=isModified) char modified;
@property (readonly, nonatomic) char isPendingUpgrade;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithApplication:(id)a0 path:(id)a1 developerName:(id)a2 teamID:(id)a3 bundleIDs:(id)a4 allowed:(char)a5 rebootRequired:(char)a6 isPendingUpgrade:(char)a7;
- (id)initWithDeveloper:(id)a0 teamID:(id)a1 bundleIDs:(id)a2 allowed:(char)a3 rebootRequired:(char)a4 isPendingUpgrade:(char)a5;

@end
