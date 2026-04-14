@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject

@property (retain) NSDate *date;

+ (BOOL)shouldRekeyIfLastRekeyFrom:(id)a0;
+ (id)debugDescriptionForAction:(unsigned long long)a0;
+ (BOOL)validateFetchedPrekeyTimestamp:(double)a0 forEvaluationType:(unsigned long long)a1;
+ (id)sharedManager;
+ (BOOL)prekeyCanBeDeleted:(id)a0;
+ (void)setNowDate:(id)a0;
+ (id)oldestDateAllowedToSendTo;
+ (BOOL)prekeyShouldBeRolled:(id)a0;
+ (id)nowDate;
+ (double)timeIntervalAllowedForAction:(unsigned long long)a0;

- (void).cxx_destruct;

@end
