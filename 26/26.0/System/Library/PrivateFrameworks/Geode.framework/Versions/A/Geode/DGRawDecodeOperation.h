@class NSString, NSArray;

@interface DGRawDecodeOperation : DGOperation {
    NSString *_inputMethodVersion;
}

@property (copy, nonatomic) NSString *inputMethodVersion;
@property (nonatomic) BOOL supportsNoiseReduction;
@property (copy, nonatomic) NSString *boostVersion;
@property (copy, nonatomic) NSArray *boostParams;
@property (copy, nonatomic) NSString *gainMapVersion;
@property (copy, nonatomic) NSArray *gainMapParameters;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)defaultValueForInputKey:(id)a0;
- (BOOL)isEqualToOperation:(id)a0;
- (BOOL)isMigratable;

@end
