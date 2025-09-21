@class NSSet;

@interface TSSPropertySet : NSObject <NSCopying, NSMutableCopying> {
    id mIndexSet;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } propertyRange;
@property (readonly, nonatomic) NSSet *propertyStrings;

+ (id)propertySet;
+ (id)propertySetWithProperties:(int)a0;
+ (id)p_mutableIndexSetWithFirstProperty:(int)a0 argumentList:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
+ (id)propertySetWithProperty:(int)a0;
+ (id)propertySetFromUnionOfPropertySets:(id)a0;
+ (id)propertySetWithArray:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIndexSet:(id)a0;
- (id)initWithProperties:(int)a0;
- (id)initWithProperty:(int)a0;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (char)containsProperty:(int)a0;
- (id)propertySetByIntersectingWithPropertySet:(id)a0;
- (char)containsProperties:(id)a0;
- (id)initWithFirstProperty:(int)a0 argumentList:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
- (id)initWithPropertySet:(id)a0;
- (char)intersectsProperties:(id)a0;
- (id)propertySetByAddingProperties:(int)a0;
- (id)propertySetByAddingPropertiesFromSet:(id)a0;
- (id)propertySetByAddingProperty:(int)a0;
- (id)propertySetByRemovingProperties:(int)a0;
- (id)propertySetByRemovingPropertiesFromSet:(id)a0;
- (id)propertySetByRemovingProperty:(int)a0;

@end
