@class NSString, NSArray;

@interface SPLocationFetchContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL subscribe;
@property (copy, nonatomic) NSString *cachePolicy;
@property (copy, nonatomic) NSArray *searchIdentifiers;
@property (copy, nonatomic) NSArray *searchPriority;
@property (copy, nonatomic) NSArray *searchTypes;
@property (copy, nonatomic) NSArray *searchLocationSources;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
