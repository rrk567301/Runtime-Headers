@interface CNUIDatabaseFetcher : NSObject

+ (id)observerWithCompletionHandler:(id /* block */)a0;
+ (id)fetchContactMatchingDescription:(id)a0 completionHandler:(id /* block */)a1;
+ (id)fetchParentContainerMatchingDescription:(id)a0 completionHandler:(id /* block */)a1;
+ (id)combineContact:(id)a0 withContainerFetchResult:(id)a1;
+ (id)fetchParentAndLinkedContainersOfContact:(id)a0 inStore:(id)a1 error:(id *)a2;
+ (id)fetchParentContainerOfContact:(id)a0 inStore:(id)a1 error:(id *)a2;
+ (id)predicateForParentContainerOfContact:(id)a0 inStore:(id)a1;
+ (id)predicateForDefaultContainerInStore:(id)a0;
+ (id)fetchContactWithIdentifier:(id)a0 unified:(BOOL)a1 keysToFetch:(id)a2 contactStore:(id)a3 fetchAsynchronously:(BOOL)a4 completionHandler:(id /* block */)a5;
+ (void)notifyObserver:(id)a0 withResult:(id)a1 error:(id)a2 nextActionOnSuccess:(id /* block */)a3;
+ (void)finishObserver:(id)a0 withResult:(id)a1 error:(id)a2;

@end
