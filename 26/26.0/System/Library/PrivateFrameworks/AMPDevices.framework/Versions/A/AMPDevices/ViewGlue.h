@interface ViewGlue : NSObject

+ (void)glueChild:(id)a0 toParent:(id)a1 horizontal:(float)a2 vertical:(float)a3;
+ (void)glueChild:(id)a0 toParent:(id)a1 onEdge:(long long)a2 priority:(float)a3;
+ (void)glueChild:(id)a0 toParent:(id)a1 priority:(float)a2;
+ (void)glueChild:(id)a0 toParent:(id)a1 top:(float)a2 leading:(float)a3 bottom:(float)a4 trailing:(float)a5;

@end
