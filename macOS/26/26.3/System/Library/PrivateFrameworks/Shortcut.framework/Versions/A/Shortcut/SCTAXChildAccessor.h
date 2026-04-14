@class NSString, NSNumber;

@interface SCTAXChildAccessor : NSObject <NSCoding> {
    NSString *mAttribute;
    NSString *mValue;
    NSNumber *mOccurance;
}

- (id)attribute;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)value;
- (long long)computeOccuranceIndexForChild:(struct __AXUIElement { } *)a0 forParent:(struct __AXUIElement { } *)a1;
- (void)extractSearchAttributeAndValueFromChild:(struct __AXUIElement { } *)a0;
- (id)initWithParent:(struct __AXUIElement { } *)a0 child:(struct __AXUIElement { } *)a1;
- (struct __AXUIElement { } *)resolveFromContainer:(struct __AXUIElement { } *)a0;

@end
