@class NSString, NSArray;

@interface HMMatterTopology : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *appBundleID;
@property (readonly, copy, nonatomic) NSArray *homes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHomes:(id)a0 appBundleID:(id)a1;
- (id)initWithHomes:(id)a0;

@end
