@class NSUUID, NSDate;

@interface HDSafeCMSwimData : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSUUID *sourceId;

- (void).cxx_destruct;
- (id)initWithSwimData:(id)a0;

@end
