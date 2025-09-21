@class NSString, NSNumber;

@interface SLDImageSymbolConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long coreUISize;
@property (nonatomic) long long weight;
@property (nonatomic) double pointSize;
@property (retain, nonatomic) NSNumber *pointSizeNumber;

+ (id)configurationWithName:(id)a0 coreUISize:(long long)a1 weight:(long long)a2 pointSize:(double)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 coreUISize:(long long)a1 weight:(long long)a2 pointSize:(double)a3;
- (struct CGSize { double x0; double x1; })minViableSizeWithDisplayScale:(double)a0 RTL:(char)a1 darkMode:(char)a2;
- (struct CGSize { double x0; double x1; })minViableSizeWithStyle:(id)a0;

@end
