@class NSDate;

@interface MapsSync.MapsSyncDateRange : NSObject {
    void /* unknown type, empty encoding */ _range;
}

@property (nonatomic, readonly) NSDate *lower;
@property (nonatomic, readonly) NSDate *upper;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
