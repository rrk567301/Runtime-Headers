@class NSNumber;

@interface INMediaUserContext : INUserContext

@property long long subscriptionStatus;
@property (copy) NSNumber *numberOfLibraryItems;

+ (BOOL)supportsSecureCoding;
+ (id)_sharedFormatter;
+ (long long)_type;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)safeLibraryItems;

@end
