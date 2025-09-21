@class NSArray, NSDictionary;

@interface CHRemoteLineWrappingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL enableCachingIfAvailable;
@property (readonly, nonatomic) NSArray *lineWrappableGroups;
@property (copy, nonatomic) NSDictionary *options;

+ (Class)classForKeyedUnarchiver;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLineWrappableGroups:(id)a0 options:(id)a1;
- (BOOL)isEqualToRemoteLineWrappingRequest:(id)a0;

@end
