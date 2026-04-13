@class NSString, CNResult;
@protocol CNCDContactFetcherPredicateEvaluationContext, CNCDContainerScopedContactPredicate;

@interface _CNCDContactFetcherPredicateEvaluationContainerScopedStrategy : NSObject <CNCDContactFetcherPredicateEvaluationStrategy>

@property (readonly) id<CNCDContainerScopedContactPredicate> predicate;
@property (readonly) id<CNCDContactFetcherPredicateEvaluationContext> evaluationContext;
@property (retain) CNResult *contacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)validatePredicate;
- (void)fetchContactsInTopLevelContainers;
- (void)fetchContactsInSubContainers;
- (void)fetchUnscopedContacts;
- (BOOL)isPredicateValid;
- (id)fetchUnscopedContactsMatchingPredicate:(id)a0;
- (id)fetchContacts;
- (id)initWithPredicate:(id)a0 evaluationContext:(id)a1;

@end
