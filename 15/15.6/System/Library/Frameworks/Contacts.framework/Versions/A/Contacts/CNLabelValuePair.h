@class NSString;

@interface CNLabelValuePair : NSObject <NSCopying>

@property (readonly) NSString *label;
@property (readonly) id value;

+ (id)labeledValueWithLabel:(id)a0 value:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 value:(id)a1;

@end
