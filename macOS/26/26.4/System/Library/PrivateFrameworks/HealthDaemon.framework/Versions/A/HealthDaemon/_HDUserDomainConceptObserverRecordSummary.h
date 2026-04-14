@class NSArray;

@interface _HDUserDomainConceptObserverRecordSummary : NSObject

@property (readonly, copy, nonatomic) NSArray *journaledConcepts;
@property (readonly, copy, nonatomic) NSArray *addedConcepts;
@property (readonly, copy, nonatomic) NSArray *updatedConcepts;
@property (readonly, copy, nonatomic) NSArray *removedConcepts;
@property (readonly, nonatomic) long long maxAnchor;
@property (readonly, nonatomic) BOOL isEmpty;

- (void).cxx_destruct;
- (id)init;
- (id)initWithJournaledConcepts:(id)a0 addedConcepts:(id)a1 updatedConcepts:(id)a2 removedConcepts:(id)a3 maxAnchor:(long long)a4;

@end
