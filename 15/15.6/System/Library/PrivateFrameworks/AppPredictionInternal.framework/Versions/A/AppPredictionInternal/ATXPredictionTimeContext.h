@class NSDate;

@interface ATXPredictionTimeContext : ATXPredictionContextDomain {
    double _absoluteDate;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int dayOfWeek;
@property (readonly, nonatomic) int timeOfDay;
@property (readonly, nonatomic) char dateInWeekend;

- (id)description;
- (char)isEqual:(id)a0;
- (id)initWithDate:(id)a0;
- (void)setDate:(id)a0;
- (id)jsonDict;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (char)isEqualToATXPredictionTimeContext:(id)a0;

@end
