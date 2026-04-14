@class NSArray;

@interface ATXDuetDataProvider : NSObject

@property (class, readonly, nonatomic) Class supportedDuetEventClass;

@property (readonly, nonatomic) NSArray *streamData;

- (id)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2 limit:(unsigned long long)a3 ascending:(BOOL)a4;
- (void).cxx_destruct;
- (id)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2;

@end
