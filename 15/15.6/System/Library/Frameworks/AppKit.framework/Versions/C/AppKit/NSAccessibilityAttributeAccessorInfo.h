@class NSString;

@interface NSAccessibilityAttributeAccessorInfo : NSObject

@property (retain) NSString *attribute;
@property long long returnType;
@property (getter=isParameterized) char parameterized;
@property SEL getter;
@property SEL setter;
@property SEL action;
@property long long paramType;
@property char isBaseImplementationAcceptable;

+ (id)_stringForAttributeType:(long long)a0;
+ (id)stringArrayForEnumType:(long long)a0;

- (void)dealloc;
- (id)description;
- (id)_getAttributeValueForObject:(id)a0;
- (id)_getParameterizedAttributeForObject:(id)a0 withParameter:(id)a1;
- (char)_isSelector:(SEL)a0 supportedByObject:(id)a1;
- (void)_setAttributeValueForObject:(id)a0 withValue:(id)a1;
- (id)debuggingDictionary;
- (char)getAttributeValue:(id *)a0 forObject:(id)a1;
- (char)getParameterizedAttributeValue:(id *)a0 forObject:(id)a1 withParameter:(id)a2;
- (char)objectSupportsGetter:(id)a0;
- (char)objectSupportsSetter:(id)a0;
- (char)setAttributeValueForObject:(id)a0 withValue:(id)a1;

@end
