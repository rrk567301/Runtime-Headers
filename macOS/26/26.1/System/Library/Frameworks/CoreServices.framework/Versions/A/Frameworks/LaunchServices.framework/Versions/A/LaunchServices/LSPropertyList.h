@class NSString, NSDictionary;

@interface LSPropertyList : NSObject <_EXDictionaryLike, LSDetachable, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *_expensiveDictionaryRepresentation;
@property (readonly) NSString *_applicationIdentifier;

+ (id)propertyListWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)propertyListWithDictionary:(id)a0;
+ (id)propertyListWithData:(id)a0;
+ (id)new;

- (id)_EX_dictionaryForKey:(id)a0;
- (id)objectsForKeys:(id)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (id)objectForKey:(id)a0 checkingKeyClass:(Class)a1 checkingValueClass:(Class)a2;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (void)detach;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
