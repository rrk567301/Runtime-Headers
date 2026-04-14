@class NSString, NSArray;

@interface HMMatterTopology : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *ecosystemName;
@property (readonly, copy, nonatomic) NSArray *homes;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHomes:(id)a0;
- (id)initWithHomes:(id)a0 ecosystemName:(id)a1;

@end
