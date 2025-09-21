@class NSDate;

@interface CSDateTag : CSNumericAnalysisTag

@property (readonly, nonatomic) NSDate *date;

- (void)encodeWithCSCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 confidence:(double)a1;

@end
