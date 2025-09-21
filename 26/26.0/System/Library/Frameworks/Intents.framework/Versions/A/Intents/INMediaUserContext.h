@class NSNumber;

@interface INMediaUserContext : INUserContext

@property long long subscriptionStatus;
@property (copy) NSNumber *numberOfLibraryItems;

+ (long long)_type;
+ (BOOL)supportsSecureCoding;
+ (id)_sharedFormatter;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)safeLibraryItems;

@end
