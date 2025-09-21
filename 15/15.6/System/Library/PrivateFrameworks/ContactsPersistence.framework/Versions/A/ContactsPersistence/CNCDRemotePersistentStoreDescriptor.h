@class NSString, NSURL;

@interface CNCDRemotePersistentStoreDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *accountIdentifier;
@property (copy) NSURL *URL;
@property char includesDisabledStoreMatches;

+ (id)descriptorForAnyStoreIncludingDisabled:(char)a0;
+ (id)descriptorForEnabledStoreWithAccountIdentifier:(id)a0;
+ (id)descriptorForEnabledStoreWithURL:(id)a0;
+ (id)descriptorForLocalStore;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)matchesAccountDescription:(id)a0;

@end
