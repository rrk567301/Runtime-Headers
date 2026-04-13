@class NSArray;

@interface UPPLNerResponse : NSObject

@property (readonly, nonatomic) NSArray *alternativePredictions;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)spans;
- (id)initWithAlternativePredictions:(id)a0;

@end
