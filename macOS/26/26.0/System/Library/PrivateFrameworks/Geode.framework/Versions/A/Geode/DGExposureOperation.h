@class NSNumber, NSString;

@interface DGExposureOperation : DGOperation <DGAutoCalculable> {
    BOOL _inputIsDefaults;
    NSNumber *_inputBias;
}

@property (copy, nonatomic) NSNumber *inputEV;
@property (copy, nonatomic) NSNumber *inputRecoveryEV;
@property (copy, nonatomic) NSNumber *inputBias;
@property (copy, nonatomic) NSNumber *inputBrightness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;

- (id)initWithOperation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)defaultValueForInputKey:(id)a0;
- (BOOL)isEqualToOperation:(id)a0;
- (void)_applyAutoSettings:(id)a0;
- (BOOL)applySettingsDictionary:(id)a0;
- (void)setOperationDefaults;

@end
