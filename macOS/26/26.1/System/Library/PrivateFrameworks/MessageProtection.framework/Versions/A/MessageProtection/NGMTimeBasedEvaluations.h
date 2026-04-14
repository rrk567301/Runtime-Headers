@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject

@property (retain) NSDate *date;

+ (id)oldestDateAllowedToSendTo;
+ (BOOL)prekeyShouldBeRolled:(id)a0;
+ (id)sharedManager;
+ (double)timeIntervalAllowedForAction:(unsigned long long)a0;
+ (id)nowDate;
+ (BOOL)prekeyCanBeDeleted:(id)a0;
+ (BOOL)validateFetchedPrekeyTimestamp:(double)a0 forEvaluationType:(unsigned long long)a1;
+ (BOOL)shouldRekeyIfLastRekeyFrom:(id)a0;
+ (id)debugDescriptionForAction:(unsigned long long)a0;
+ (void)setNowDate:(id)a0;

- (void).cxx_destruct;

@end
