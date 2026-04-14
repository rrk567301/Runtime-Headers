@class NSNumber, NSString, NSArray;

@interface DGSemanticEnhanceOperation : DGOperation

@property (copy, nonatomic) NSNumber *intensity;
@property (copy, nonatomic) NSString *sceneLabel;
@property (copy, nonatomic) NSArray *boundingBoxes;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;

- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;

@end
