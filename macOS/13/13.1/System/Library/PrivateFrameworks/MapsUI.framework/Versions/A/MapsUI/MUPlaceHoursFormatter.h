@class NSString, NSArray;

@interface MUPlaceHoursFormatter : NSObject {
    BOOL _formatAMPM;
}

@property (readonly, nonatomic) NSString *hoursString;
@property (readonly, nonatomic) NSArray *AMPMSymbols;

+ (id)hoursFormatterFromHoursStringComponents:(id)a0 AMPMSymbols:(id)a1;
+ (id)_hoursMonospacedFont;
+ (id)_AMPMFont;

- (void).cxx_destruct;
- (id)initWithHoursString:(id)a0 AMPMSymbols:(id)a1;
- (id)buildAttributedHourStringWithHourFont:(id)a0 AMPMFont:(id)a1 hourColor:(id)a2;
- (id)buildDefaultPlacecardHoursString;

@end
