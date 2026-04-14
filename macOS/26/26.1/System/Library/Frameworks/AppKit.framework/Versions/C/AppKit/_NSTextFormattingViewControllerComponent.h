@class NSString;

@interface _NSTextFormattingViewControllerComponent : NSObject <NSCopying, NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *componentKey;
@property (nonatomic, readonly) long long preferredSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithComponentKey:(id)a0;
- (id)initWithComponentKey:(id)a0 preferredSize:(long long)a1;

@end
