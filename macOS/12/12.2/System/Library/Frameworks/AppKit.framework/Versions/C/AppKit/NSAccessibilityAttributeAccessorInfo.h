@class NSString;

@interface NSAccessibilityAttributeAccessorInfo : NSObject

@property (retain) NSString *attribute;
@property long long returnType;
@property (getter=isParameterized) BOOL parameterized;
@property SEL getter;
@property SEL setter;
@property SEL action;
@property long long paramType;
@property BOOL isBaseImplementationAcceptable;

+ (id)stringArrayForEnumType:(long long)a0;
+ (id)_stringForAttributeType:(long long)a0;

- (void)dealloc;
- (id)description;
- (BOOL)_isSelector:(SEL)a0 supportedByObject:(id)a1;
- (BOOL)objectSupportsGetter:(id)a0;
- (id)_getParameterizedAttributeForObject:(id)a0 withParameter:(id)a1;
- (id)_getAttributeValueForObject:(id)a0;
- (BOOL)objectSupportsSetter:(id)a0;
- (void)_setAttributeValueForObject:(id)a0 withValue:(id)a1;
- (BOOL)getParameterizedAttributeValue:(id *)a0 forObject:(id)a1 withParameter:(id)a2;
- (BOOL)getAttributeValue:(id *)a0 forObject:(id)a1;
- (BOOL)setAttributeValueForObject:(id)a0 withValue:(id)a1;
- (id)debuggingDictionary;

@end
