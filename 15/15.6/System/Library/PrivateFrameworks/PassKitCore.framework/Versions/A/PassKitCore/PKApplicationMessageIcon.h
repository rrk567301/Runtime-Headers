@class PKImageDescriptor;

@interface PKApplicationMessageIcon : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKImageDescriptor *image;
@property (readonly, nonatomic) long long style;

+ (id)createWithImage:(id)a0 style:(long long)a1;
+ (struct CGSize { double x0; double x1; })maximumSizeForStyle:(long long)a0;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
