@class NSArray, NSDictionary;

@interface CHRemoteLineWrappingRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char enableCachingIfAvailable;
@property (readonly, nonatomic) NSArray *lineWrappableGroups;
@property (copy, nonatomic) NSDictionary *options;

+ (Class)classForKeyedUnarchiver;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLineWrappableGroups:(id)a0 options:(id)a1;
- (char)isEqualToRemoteLineWrappingRequest:(id)a0;

@end
