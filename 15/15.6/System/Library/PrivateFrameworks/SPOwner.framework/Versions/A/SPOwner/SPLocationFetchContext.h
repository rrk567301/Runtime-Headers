@class NSString, NSArray, NSDictionary;

@interface SPLocationFetchContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) char subscribe;
@property (nonatomic) char reportDeviceEvents;
@property (copy, nonatomic) NSString *cachePolicy;
@property (copy, nonatomic) NSArray *searchIdentifiers;
@property (copy, nonatomic) NSArray *searchPriority;
@property (copy, nonatomic) NSArray *searchTypes;
@property (copy, nonatomic) NSArray *searchLocationSources;
@property (copy, nonatomic) NSDictionary *lastOnlineLocationInfo;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } primaryIndexRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
