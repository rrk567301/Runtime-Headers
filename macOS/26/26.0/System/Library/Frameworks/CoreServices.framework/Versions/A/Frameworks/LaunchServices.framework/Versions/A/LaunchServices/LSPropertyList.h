@class NSString, NSDictionary;

@interface LSPropertyList : NSObject <_EXDictionaryLike, LSDetachable, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *_expensiveDictionaryRepresentation;
@property (readonly) NSString *_applicationIdentifier;

+ (id)new;
+ (id)propertyListWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)propertyListWithDictionary:(id)a0;
+ (id)propertyListWithData:(id)a0;

- (id)_EX_dictionaryForKey:(id)a0;
- (id)objectsForKeys:(id)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (id)_init;
- (void)detach;
- (id)objectForKey:(id)a0 checkingKeyClass:(Class)a1 checkingValueClass:(Class)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;

@end
