@class NSString, NSDate;

@interface ATXDateRelevantContext : NSObject <ATXRelevantContext> {
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *description;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
