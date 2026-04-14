@class NSMutableDictionary;

@interface FPDDailyTelemetryCounter : NSObject

@property (retain, nonatomic) NSMutableDictionary *hourlyValues;

- (id)initWithData:(id)a0;
- (id)init;
- (id)archive;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_garbageCollect;
- (void)addNow:(int)a0;
- (void)addValue:(int)a0 at:(id)a1;
- (int)dailyValue;
- (id)dateToKey:(id)a0;
- (int)getValueAt:(id)a0;
- (void)replaceValue:(int)a0 at:(id)a1;

@end
