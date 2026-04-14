@class NSArray, NSString;

@interface CNContactLikenessesAggregateFetchStrategy : NSObject <CNContactLikenessesFetchStrategy>

@property (retain, nonatomic) NSArray *fetchStrategies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactLikenessModelObservablesFromFetchStrategies:(id)a0;
+ (id)aggregateContactLikenessModelFromModels:(id)a0;

@end
