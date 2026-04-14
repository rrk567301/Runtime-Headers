@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject

@property (retain) NSDate *date;

+ (BOOL)validateFetchedPrekeyTimestamp:(double)a0 forEvaluationType:(unsigned long long)a1;
+ (id)nowDate;
+ (id)oldestDateAllowedToSendTo;
+ (id)debugDescriptionForAction:(unsigned long long)a0;
+ (double)timeIntervalAllowedForAction:(unsigned long long)a0;
+ (BOOL)shouldRekeyIfLastRekeyFrom:(id)a0;
+ (id)sharedManager;
+ (BOOL)prekeyShouldBeRolled:(id)a0;
+ (BOOL)prekeyCanBeDeleted:(id)a0;
+ (void)setNowDate:(id)a0;

- (void).cxx_destruct;

@end
