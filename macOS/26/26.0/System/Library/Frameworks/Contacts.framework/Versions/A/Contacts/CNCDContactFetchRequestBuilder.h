@class CNContactFetchRequest;

@interface CNCDContactFetchRequestBuilder : NSObject

@property (copy) CNContactFetchRequest *fetchRequest;

+ (long long)defaultSortOrder;

- (id)sortDescriptors;
- (id)initWithFetchRequest:(id)a0;
- (id)effectiveKeysToFetch;
- (BOOL)unifyResults;
- (void).cxx_destruct;
- (id)buildFetchRequestDescription;
- (id /* block */)contactsByNameComparator;
- (id)effectivePredicate:(id)a0;
- (id)relationshipKeyPathsAndPropertyKeysPair;
- (id)relationshipKeyPathsAndPropertyKeysPairForKeyVector:(id)a0;
- (id)validatePredicate:(id)a0 error:(id *)a1;
- (id)validatePredicateWithError:(id *)a0;

@end
