@interface RTRuntime : NSObject

+ (double)footprint;
+ (id)subclassesOfClass:(Class)a0 images:(id)a1 includeParentClass:(BOOL)a2;
+ (id)directSubclassesOfClass:(Class)a0 images:(id)a1 includeParentClass:(BOOL)a2;
+ (id)classesFromImages:(id)a0;
+ (id)objToString:(id)a0 filterProperties:(id)a1;
+ (id)objToDictionary:(id)a0 filterProperties:(id)a1;
+ (id)routineImageNames;
+ (id)routineClassStrings;
+ (id)routineSubclassesOfClass:(Class)a0;
+ (id)routineClasses;

@end
