@class NSSet, NSDictionary, EAEmailAddressSet, PPTrialWrapper;

@interface PPEventScorer : NSObject {
    NSDictionary *_pastEventTitlesAndParticipants;
    double _earliestStartTime;
    char _shouldConsiderAlarms;
    EAEmailAddressSet *_emailVIPEmailAddresses;
    NSSet *_favoritesEmailAddresses;
    int _rankingOptions;
    long long _pastTitlesCount;
    PPTrialWrapper *_trialWrapper;
}

+ (void)clearAssetCache;
+ (void)enrichDictionary:(id)a0 withEvent:(id)a1 interningSet:(id)a2;
+ (void)setLocationsOfInterestLocations:(id)a0 withReferenceDate:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (char)isHomeCalendar:(id)a0;
- (char)isWorkCalendar:(id)a0;
- (id)initWithPastEventTitlesAndParticipants:(id)a0 andEarliestStartTime:(double)a1 shouldConsiderAlarms:(char)a2 withOptions:(int)a3 trialWrapper:(id)a4;
- (id)initWithTrialWrapper:(id)a0;
- (id)scoreEvent:(id)a0 usingDate:(id)a1;
- (char)scoreIsExtraordinary:(double)a0 rankingOptions:(int)a1;
- (void)setEmailVIPEmailAddresses:(id)a0;
- (void)setFavoritesEmailAddresses:(id)a0;

@end
