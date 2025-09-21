@class NSDate;

@interface ATXUIFeedbackMetricsQuery : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long clientModelType;
@property (nonatomic) unsigned char consumerSubType;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToATXUIFeedbackMetricsQuery:(id)a0;

@end
