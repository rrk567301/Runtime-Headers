@class NSData, NSDate;
@protocol CADSpotlightDefaultsStorage;

@interface CADSpotlightDefaults : NSObject {
    id<CADSpotlightDefaultsStorage> _spotlightDefaults;
}

@property (readonly, nonatomic) BOOL reindexingInProgress;
@property (nonatomic) int reindexesStartedWithoutProgress;
@property (retain, nonatomic) NSDate *lastReindexStartDate;
@property (nonatomic) int lastSpotlightIndexEventsVersion;
@property (nonatomic) int lastSpotlightIndexCalendarsVersion;
@property (retain, nonatomic) NSDate *lastABCReport;
@property (retain, nonatomic) NSData *reindexState;

- (void).cxx_destruct;
- (id)initWithDefaults:(id)a0;
- (id)init;
- (id)dataPreferenceValueForKey:(id)a0;
- (id)datePreferenceValueForKey:(id)a0;
- (int)intPreferenceValueForKey:(id)a0;
- (void)setLastABCReportAtDate:(id)a0;

@end
