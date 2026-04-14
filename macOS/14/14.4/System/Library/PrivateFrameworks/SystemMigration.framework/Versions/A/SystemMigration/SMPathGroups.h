@interface SMPathGroups : NSObject

+ (id)applicationGroupBundlesToLocalizeFromPather:(id)a0;
+ (id)coalescedPathsForGrouping:(unsigned long long)a0 fromPather:(id)a1;
+ (id)copiersForGrouping:(unsigned long long)a0 fromPather:(id)a1;
+ (unsigned long long)preliminaryCountForGrouping:(unsigned long long)a0 fromPather:(id)a1;
+ (unsigned long long)preliminarySizeOfGrouping:(unsigned long long)a0 fromPather:(id)a1;
+ (unsigned long long)sizeAndCount:(unsigned long long *)a0 ofGrouping:(unsigned long long)a1 fromPather:(id)a2;
+ (void)sizeOfGrouping:(unsigned long long)a0 fromPather:(id)a1 callbackBlock:(id /* block */)a2;
+ (void)updatePreliminaryGroupSizeDelegates:(id)a0 fromPather:(id)a1;

@end
