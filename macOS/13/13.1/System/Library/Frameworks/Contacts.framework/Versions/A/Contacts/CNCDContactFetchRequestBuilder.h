@class CNContactFetchRequest;

@interface CNCDContactFetchRequestBuilder : NSObject

@property (copy) CNContactFetchRequest *fetchRequest;

+ (long long)defaultSortOrder;

- (void).cxx_destruct;
- (id)sortDescriptors;
- (id)initWithFetchRequest:(id)a0;
- (BOOL)unifyResults;
- (id)validatePredicate:(id)a0 error:(id *)a1;
- (id)effectivePredicate:(id)a0;
- (id)effectiveKeysToFetch;
- (id /* block */)contactsByNameComparator;
- (id)relationshipKeyPathsAndPropertyKeysPair;
- (id)relationshipKeyPathsAndPropertyKeysPairForKeyVector:(id)a0;
- (id)buildFetchRequestDescription;
- (id)validatePredicateWithError:(id *)a0;

@end
