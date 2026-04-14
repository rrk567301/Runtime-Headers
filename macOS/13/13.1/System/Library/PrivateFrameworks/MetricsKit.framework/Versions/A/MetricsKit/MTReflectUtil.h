@interface MTReflectUtil : NSObject

+ (BOOL)objectAsBool:(id)a0;
+ (id)objectAsString:(id)a0;
+ (id)objectAsArray:(id)a0;
+ (id)objectAsDictionary:(id)a0;
+ (id)mergeAndCleanDictionaries:(id)a0;
+ (id)removeNullValuesFromDictionary:(id)a0;

@end
