@class NSDate;

@interface ATXUsageInsightsInferredModeEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long atxMode;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithATXMode:(unsigned long long)a0 startTime:(id)a1 endTime:(id)a2;

@end
