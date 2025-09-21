@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject

@property (retain) NSDate *date;

+ (id)sharedManager;
+ (id)nowDate;
+ (id)debugDescriptionForAction:(unsigned long long)a0;
+ (id)oldestDateAllowedToSendTo;
+ (char)prekeyCanBeDeleted:(id)a0;
+ (char)prekeyShouldBeRolled:(id)a0;
+ (void)setNowDate:(id)a0;
+ (char)shouldRekeyIfLastRekeyFrom:(id)a0;
+ (double)timeIntervalAllowedForAction:(unsigned long long)a0;
+ (char)validateFetchedPrekeyTimestamp:(double)a0 forEvaluationType:(unsigned long long)a1;

- (void).cxx_destruct;

@end
