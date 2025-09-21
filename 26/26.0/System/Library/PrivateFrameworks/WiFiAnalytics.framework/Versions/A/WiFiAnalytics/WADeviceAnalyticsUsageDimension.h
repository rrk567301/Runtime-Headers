@class NSString, NSPredicate, NSEntityDescription;

@interface WADeviceAnalyticsUsageDimension : NSObject <NSCopying>

@property (retain) NSString *dimension;
@property unsigned long long useAs;
@property (retain) NSPredicate *filterPredicate;
@property long long inf;
@property (retain) NSEntityDescription *entity;

+ (id)dimensionWith:(id)a0 forEntity:(id)a1;
+ (id)dimensionsUsedAsFilterIn:(id)a0;
+ (id)dimensionsUsedAsGroupBy:(id)a0;
+ (id)usedDimensionsIn:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)useDimensionAs:(unsigned long long)a0 withPredicate:(id)a1 withError:(id *)a2;
- (BOOL)useDimensionAsGroupBy;

@end
