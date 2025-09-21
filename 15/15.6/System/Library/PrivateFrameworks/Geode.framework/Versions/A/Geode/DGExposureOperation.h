@class NSNumber, NSString;

@interface DGExposureOperation : DGOperation <DGAutoCalculable> {
    char _inputIsDefaults;
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

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;
+ (id)autoCalculatedInputKeys;
+ (char)supportsAutoCalculatedValues;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)defaultValueForInputKey:(id)a0;
- (char)isEqualToOperation:(id)a0;
- (void)_applyAutoSettings:(id)a0;
- (char)applySettingsDictionary:(id)a0;
- (void)setOperationDefaults;

@end
