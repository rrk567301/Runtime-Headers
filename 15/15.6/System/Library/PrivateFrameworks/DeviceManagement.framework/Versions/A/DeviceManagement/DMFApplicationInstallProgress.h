@interface DMFApplicationInstallProgress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long phase;
@property (readonly, nonatomic) double fractionCompleted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(unsigned long long)a0 phase:(unsigned long long)a1 fractionCompleted:(double)a2;

@end
