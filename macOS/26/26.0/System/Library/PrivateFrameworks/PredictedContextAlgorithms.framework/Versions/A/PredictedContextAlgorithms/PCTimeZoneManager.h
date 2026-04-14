@class NSDictionary;

@interface PCTimeZoneManager : NSObject

@property (retain, nonatomic) NSDictionary *timeZoneRecords;
@property (retain, nonatomic) NSDictionary *condensedRecords;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)keywordForDate:(id)a0;
- (id)timeZoneAtDate:(id)a0;
- (id)condensedRecordsFromRecords:(id)a0;
- (void)processTimeZoneEvents:(id)a0;

@end
