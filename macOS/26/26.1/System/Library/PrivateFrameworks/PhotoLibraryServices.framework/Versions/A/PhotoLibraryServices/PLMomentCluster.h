@class NSArray, NSDate;

@interface PLMomentCluster : NSObject

@property (readonly, copy, nonatomic) NSArray *moments;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;

- (id)initWithMoments:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithMomentClusters:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
