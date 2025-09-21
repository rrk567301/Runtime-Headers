@interface JNFDefaultCoercions : NSObject

+ (void)addDateCoercionTo:(id)a0;
+ (void)addListCoercionTo:(id)a0;
+ (void)addMapCoercionTo:(id)a0;
+ (void)addNumberCoercionTo:(id)a0;
+ (void)addSetCoercionTo:(id)a0;
+ (void)addStringCoercionTo:(id)a0;
+ (id)defaultCoercer;

@end
