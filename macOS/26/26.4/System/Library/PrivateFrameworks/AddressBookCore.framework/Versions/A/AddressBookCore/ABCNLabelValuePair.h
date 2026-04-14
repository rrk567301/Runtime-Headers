@class NSString;

@interface ABCNLabelValuePair : NSObject <NSCopying>

@property (readonly, copy) NSString *label;
@property (readonly, copy) id value;

+ (id)labeledValueWithLabel:(id)a0 value:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;

@end
