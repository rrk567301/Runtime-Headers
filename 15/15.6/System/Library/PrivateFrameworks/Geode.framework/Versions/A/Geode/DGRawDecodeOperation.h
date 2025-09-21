@class NSString, NSArray;

@interface DGRawDecodeOperation : DGOperation {
    NSString *_inputMethodVersion;
}

@property (copy, nonatomic) NSString *inputMethodVersion;
@property (nonatomic) char supportsNoiseReduction;
@property (copy, nonatomic) NSString *boostVersion;
@property (copy, nonatomic) NSArray *boostParams;
@property (copy, nonatomic) NSString *gainMapVersion;
@property (copy, nonatomic) NSArray *gainMapParameters;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)defaultValueForInputKey:(id)a0;
- (char)isEqualToOperation:(id)a0;
- (char)isMigratable;

@end
