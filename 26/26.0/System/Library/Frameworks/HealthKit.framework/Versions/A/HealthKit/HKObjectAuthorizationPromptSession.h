@class NSUUID, NSString, HKObjectType;

@interface HKObjectAuthorizationPromptSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) HKObjectType *objectType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initForBundleIdentifier:(id)a0 sessionIdentifier:(id)a1 objectType:(id)a2;

@end
