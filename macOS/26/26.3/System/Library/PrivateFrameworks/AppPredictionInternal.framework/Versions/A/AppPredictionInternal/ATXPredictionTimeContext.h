@class NSDate;

@interface ATXPredictionTimeContext : ATXPredictionContextDomain {
    double _absoluteDate;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int dayOfWeek;
@property (readonly, nonatomic) int timeOfDay;
@property (readonly, nonatomic) BOOL dateInWeekend;

- (id)description;
- (id)proto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)encodeAsProto;
- (id)initWithDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setDate:(id)a0;
- (BOOL)isEqualToATXPredictionTimeContext:(id)a0;

@end
