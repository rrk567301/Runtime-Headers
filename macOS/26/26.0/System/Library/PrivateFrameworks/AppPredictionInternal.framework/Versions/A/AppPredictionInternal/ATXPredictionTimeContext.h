@class NSDate;

@interface ATXPredictionTimeContext : ATXPredictionContextDomain {
    double _absoluteDate;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int dayOfWeek;
@property (readonly, nonatomic) int timeOfDay;
@property (readonly, nonatomic) BOOL dateInWeekend;

- (BOOL)isEqualToATXPredictionTimeContext:(id)a0;
- (void)setDate:(id)a0;
- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)description;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (id)initWithDate:(id)a0;

@end
