@class NSNumber, NSDate;

@interface RTVisitDecoded : NSObject

@property (nonatomic) double logProbability;
@property (retain, nonatomic) NSDate *entryDate;
@property (retain, nonatomic) NSDate *exitDate;
@property (readonly, nonatomic) NSNumber *outputType;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)noVisit;
- (char)completeVisit;
- (id)initWithEntryDate:(id)a0 exitDate:(id)a1 logProbability:(double)a2;
- (char)partialVisit;

@end
