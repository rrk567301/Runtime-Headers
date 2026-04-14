@class NSNumber, NSError;

@interface PXStoryProducerResult : NSObject

@property (class, readonly, nonatomic) PXStoryProducerResult *nullResult;

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly, nonatomic) NSNumber *fractionCompleted;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) double productionDuration;

- (id)initWithObject:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)error:(id)a0;
- (unsigned long long)hash;
- (id)deliveredNowWithRequestTime:(double)a0;
- (id)flags:(unsigned long long)a0;
- (id)fractionCompleted:(float)a0;

@end
