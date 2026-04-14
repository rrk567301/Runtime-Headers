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

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)defaultValueForInputKey:(id)a0;
- (BOOL)isEqualToOperation:(id)a0;
- (BOOL)isMigratable;

@end
