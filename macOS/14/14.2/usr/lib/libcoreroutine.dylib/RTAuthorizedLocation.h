@class RTLearnedLocationOfInterest;

@interface RTAuthorizedLocation : NSObject

@property (readonly) double dwellTime_s;
@property (readonly) RTLearnedLocationOfInterest *loi;
@property (readonly) long long numberOfDaysVisited;

- (void).cxx_destruct;
- (id)initWithLoi:(id)a0 dwellTime:(double)a1 numberOfDaysVisited:(long long)a2;

@end
