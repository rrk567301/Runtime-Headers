@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject

@property (retain) NSDate *date;

+ (id)debugDescriptionForAction:(unsigned long long)a0;
+ (id)oldestDateAllowedToSendTo;
+ (double)timeIntervalAllowedForAction:(unsigned long long)a0;
+ (BOOL)prekeyShouldBeRolled:(id)a0;
+ (BOOL)prekeyCanBeDeleted:(id)a0;
+ (id)nowDate;
+ (BOOL)shouldRekeyIfLastRekeyFrom:(id)a0;
+ (id)sharedManager;
+ (void)setNowDate:(id)a0;
+ (BOOL)validateFetchedPrekeyTimestamp:(double)a0 forEvaluationType:(unsigned long long)a1;

- (void).cxx_destruct;

@end
