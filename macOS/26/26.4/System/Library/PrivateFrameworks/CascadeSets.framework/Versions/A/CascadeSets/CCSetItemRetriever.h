@class CCSet, NSObject;
@protocol CCItemRetriever;

@interface CCSetItemRetriever : NSObject {
    CCSet *_set;
    NSObject<CCItemRetriever> *_retriever;
}

+ (id)itemRetrieverForSet:(id)a0 readAccess:(id)a1;
+ (id)itemRetrieverForSet:(id)a0 useCase:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (BOOL)enumerateItemInstancesMatchingPredicate:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateSharedItemsMatchingPredicate:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)initWithSet:(id)a0 retriever:(id)a1;
- (id)singleItemInstanceMatchingPredicate:(id)a0 error:(id *)a1;
- (id)singleSharedItemMatchingPredicate:(id)a0 error:(id *)a1;

@end
