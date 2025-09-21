@class NSString, NSURL;

@interface CNCDRemotePersistentStoreDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *accountIdentifier;
@property (copy) NSURL *URL;
@property BOOL includesDisabledStoreMatches;

+ (id)descriptorForAnyStoreIncludingDisabled:(BOOL)a0;
+ (id)descriptorForEnabledStoreWithAccountIdentifier:(id)a0;
+ (id)descriptorForEnabledStoreWithURL:(id)a0;
+ (id)descriptorForLocalStore;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)matchesAccountDescription:(id)a0;

@end
