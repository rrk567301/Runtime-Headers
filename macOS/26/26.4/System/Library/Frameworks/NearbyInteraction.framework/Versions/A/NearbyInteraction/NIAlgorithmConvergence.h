@class NSArray;

@interface NIAlgorithmConvergence : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *reasons;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0 andReasons:(id)a1;
- (id)reasonsPrivate;

@end
