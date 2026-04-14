@class NSMutableDictionary;

@interface UIRAccessibilityElementRecord : NSObject <NSSecureCoding> {
    NSMutableDictionary *_properties;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)accessibilityStackWithStartingElement:(id)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)setProperties:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)properties;
- (id)description;
- (struct CGSize { double x0; double x1; })size;
- (struct CGPoint { double x0; double x1; })position;
- (void)dealloc;
- (id)initWithAXUIElement:(struct __AXUIElement { } *)a0 withParentAXUIElement:(struct __AXUIElement { } *)a1;
- (id)objectForAXValue:(void *)a0;

@end
