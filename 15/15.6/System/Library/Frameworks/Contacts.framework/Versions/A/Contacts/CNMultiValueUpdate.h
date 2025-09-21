@interface CNMultiValueUpdate : NSObject

@property (nonatomic) char ignoreIdentifiers;

+ (id)addValue:(id)a0;
+ (id)removeValue:(id)a0;
+ (id)reorderValues:(id)a0;
+ (id)replaceValue:(id)a0 withValue:(id)a1;

@end
