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

- (void)_clearLocaleDependentState;
- (id)localizedTimeStringFromDate:(id)a0 timeDesignator:(out id *)a1;
- (id)_dateOnlyFormatter;
- (void)_loadLocaleInfo;
- (id)timeDesignatorForDate:(id)a0 timeZone:(id)a1;
- (void).cxx_destruct;
- (id)localizedTimeStringFromDate:(id)a0 forTimeZone:(id)a1 timeDesignator:(out id *)a2;
- (id)init;
- (id)_timeOnlyFormatter;
- (void)dealloc;
- (void)_reloadLocaleInfo;
- (id)timeDesignatorForDate:(id)a0;

@end
