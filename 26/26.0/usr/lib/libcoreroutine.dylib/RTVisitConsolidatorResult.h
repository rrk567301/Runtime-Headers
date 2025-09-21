@class NSArray, RTVisitRedactionDetails;

@interface RTVisitConsolidatorResult : NSObject

@property (readonly, nonatomic) NSArray *visits;
@property (readonly, nonatomic) RTVisitRedactionDetails *redactionDetails;

- (void).cxx_destruct;
- (id)initWithVisits:(id)a0 redactionDetails:(id)a1;

@end
