@class NSString, NSNumber, NSArray;

@interface DGiOSEditsOperation : DGOperation

@property (readonly) NSString *editSummary;
@property (copy) NSNumber *inputStrength;
@property (copy) NSNumber *inputWarmth;
@property (copy) NSNumber *inputOrigI;
@property (copy) NSNumber *inputOrigQ;
@property (copy) NSNumber *inputShadows;
@property (copy) NSNumber *inputHighlights;
@property (copy) NSNumber *inputVibrancy;
@property (copy) NSArray *inputCurvePoints;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)allowDough;

@end
