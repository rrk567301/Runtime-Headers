@class NSString, NSDictionary;

@interface OKActionCustom : OKAction <OKActionCustomExports, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *attributes;

+ (id)customActionWithName:(id)a0;
+ (void)setupJavascriptContext:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
