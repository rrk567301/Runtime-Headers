@class NSString, NSDateFormatter;

@interface MTDateFormatting : NSObject {
    NSString *_amString;
    NSString *_pmString;
    NSDateFormatter *_dateOnlyFormatter;
    NSDateFormatter *_timeOnlyFormatter;
}

@property (readonly, weak, nonatomic) NSString *amString;
@property (readonly, weak, nonatomic) NSString *pmString;
@property (readonly, nonatomic) BOOL use24HourTime;
@property (readonly, nonatomic) BOOL timeDesignatorAppearsBeforeTime;

+ (id)sharedInstance;

- (void)_reloadLocaleInfo;
- (void)_loadLocaleInfo;
- (void)_clearLocaleDependentState;
- (id)_dateOnlyFormatter;
- (id)localizedTimeStringFromDate:(id)a0 timeDesignator:(out id *)a1;
- (void)dealloc;
- (id)localizedTimeStringFromDate:(id)a0 forTimeZone:(id)a1 timeDesignator:(out id *)a2;
- (id)timeDesignatorForDate:(id)a0 timeZone:(id)a1;
- (id)_timeOnlyFormatter;
- (void).cxx_destruct;
- (id)timeDesignatorForDate:(id)a0;
- (id)init;

@end
