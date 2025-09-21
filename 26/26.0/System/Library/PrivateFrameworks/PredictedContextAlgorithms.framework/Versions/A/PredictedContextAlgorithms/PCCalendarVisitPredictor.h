@interface PCCalendarVisitPredictor : NSObject

+ (void)_calculateLoiProbabilitiesWithLocation:(double *)a0 forEvent:(id)a1 usingHistory:(id)a2 andCalendar:(id)a3 atTime:(double)a4;
+ (void)_calculateOverlapFraction:(double *)a0 betweenVisit:(id)a1 andCalendar:(id)a2;
+ (void)_findAssociatedVisits:(id *)a0 forCalendarEvent:(id)a1 usingVisitHistory:(id)a2;
+ (void)_formPrediction:(id *)a0 fromLocationCalEvent:(id)a1 probability:(double)a2 currentTime:(double)a3;
+ (void)_formPrediction:(id *)a0 fromNoLocationCalEvent:(id)a1 probableVisit:(id)a2 currentTime:(double)a3;
+ (void)_formPredictionCommon:(id *)a0 begin:(double)a1 end:(double)a2 probability:(double)a3 currentTime:(double)a4;
+ (BOOL)_locationIsValid:(id)a0;
+ (void)_parseLocationList:(id)a0 intoArray:(id *)a1;
+ (void)predictWithHistory:(id)a0 calendarEvents:(id)a1 atTime:(double)a2 results:(id *)a3;

@end
