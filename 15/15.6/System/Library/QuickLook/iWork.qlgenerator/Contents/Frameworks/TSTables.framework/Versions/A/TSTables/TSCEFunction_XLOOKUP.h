@interface TSCEFunction_XLOOKUP : TSCEFunctionNode

+ (int)binarySearch:(id)a0 functionSpec:(id)a1 userNodeValue:(id)a2 userNodeType:(char)a3 lookupVector:(id)a4 max:(int)a5 lookupDirectionIsVertical:(char)a6 findNextSmallest:(char)a7 findNextLargest:(char)a8 isBinarySearchDescending:(char)a9 outError:(id *)a10;
+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (id)evaluateForSingleUserNodeWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;
+ (int)lookupValue:(id)a0 functionSpec:(id)a1 userNodeValue:(id)a2 lookupVector:(id)a3 matchModeArgIndex:(int)a4 matchMode:(long long)a5 searchMode:(long long)a6 outError:(id *)a7;
+ (int)regularSearch:(id)a0 functionSpec:(id)a1 userNodeValue:(id)a2 userNodeType:(char)a3 lookupVector:(id)a4 max:(int)a5 lookupDirectionIsVertical:(char)a6 findNextSmallest:(char)a7 findNextLargest:(char)a8 isWildcardSearch:(char)a9 isSearchModeReverse:(char)a10 matcher:(id)a11 outError:(id *)a12;

@end
