@interface TSCEFunction_SORTBY : TSCEFunctionNode

+ (unsigned short)functionIndex;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)shuffleMapForSortDirections:(id)a0 unsortedTags:(id)a1 sortDirections:(const void *)a2;

@end
