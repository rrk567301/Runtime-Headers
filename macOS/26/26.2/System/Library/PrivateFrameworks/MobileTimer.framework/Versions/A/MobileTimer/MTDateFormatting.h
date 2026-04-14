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

- (id)_timeOnlyFormatter;
- (id)localizedTimeStringFromDate:(id)a0 timeDesignator:(out id *)a1;
- (id)_dateOnlyFormatter;
- (void)_clearLocaleDependentState;
- (void)_loadLocaleInfo;
- (void).cxx_destruct;
- (void)_reloadLocaleInfo;
- (id)localizedTimeStringFromDate:(id)a0 forTimeZone:(id)a1 timeDesignator:(out id *)a2;
- (id)timeDesignatorForDate:(id)a0;
- (id)init;
- (id)timeDesignatorForDate:(id)a0 timeZone:(id)a1;
- (void)dealloc;

@end
