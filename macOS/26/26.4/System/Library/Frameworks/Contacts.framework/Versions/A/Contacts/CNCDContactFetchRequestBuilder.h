@class CNContactFetchRequest;

@interface CNCDContactFetchRequestBuilder : NSObject

@property (copy) CNContactFetchRequest *fetchRequest;

+ (long long)defaultSortOrder;

- (id)sortDescriptors;
- (id)initWithFetchRequest:(id)a0;
- (id)effectiveKeysToFetch;
- (void).cxx_destruct;
- (BOOL)unifyResults;
- (id)validatePredicate:(id)a0 error:(id *)a1;
- (id)buildFetchRequestDescription;
- (id /* block */)contactsByNameComparator;
- (id)effectivePredicate:(id)a0;
- (id)relationshipKeyPathsAndPropertyKeysPair;
- (id)relationshipKeyPathsAndPropertyKeysPairForKeyVector:(id)a0;
- (id)validatePredicateWithError:(id *)a0;

@end
