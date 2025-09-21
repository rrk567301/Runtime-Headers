@class NSExpression, NSString;

@interface NSPropertyTransform : NSObject <NSSecureCoding> {
    NSExpression *_valueExpression;
    NSString *_propertyName;
    NSPropertyTransform *_prerequisiteTransform;
    char _replaceMissingValueOnly;
}

@property (class, readonly) char supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyName:(id)a0 valueExpression:(id)a1;

@end
