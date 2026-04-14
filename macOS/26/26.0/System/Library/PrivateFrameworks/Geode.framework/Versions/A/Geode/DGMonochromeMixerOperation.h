@interface DGMonochromeMixerOperation : DGOperation

@property (nonatomic) long long inputType;
@property (nonatomic) double inputRValue;
@property (nonatomic) double inputGValue;
@property (nonatomic) double inputBValue;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (void)setNilValueForKey:(id)a0;
- (id)initWithOperation:(id)a0;
- (id)init;

@end
