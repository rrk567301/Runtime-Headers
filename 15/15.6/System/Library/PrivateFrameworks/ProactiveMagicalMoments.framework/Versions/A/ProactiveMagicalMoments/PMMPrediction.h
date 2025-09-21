@class NSArray, NSDate;

@interface PMMPrediction : NSObject

@property (readonly, nonatomic) NSArray *predictedItems;
@property (readonly, nonatomic) NSDate *expirationDate;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredictedItems:(id)a0 expirationDate:(id)a1;
- (char)isEqualToPrediction:(id)a0;

@end
