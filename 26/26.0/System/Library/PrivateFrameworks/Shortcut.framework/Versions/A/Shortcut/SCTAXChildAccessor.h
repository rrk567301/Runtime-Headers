@class NSString, NSNumber;

@interface SCTAXChildAccessor : NSObject <NSCoding> {
    NSString *mAttribute;
    NSString *mValue;
    NSNumber *mOccurance;
}

- (id)attribute;
- (id)value;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (long long)computeOccuranceIndexForChild:(struct __AXUIElement { } *)a0 forParent:(struct __AXUIElement { } *)a1;
- (void)extractSearchAttributeAndValueFromChild:(struct __AXUIElement { } *)a0;
- (id)initWithParent:(struct __AXUIElement { } *)a0 child:(struct __AXUIElement { } *)a1;
- (struct __AXUIElement { } *)resolveFromContainer:(struct __AXUIElement { } *)a0;

@end
