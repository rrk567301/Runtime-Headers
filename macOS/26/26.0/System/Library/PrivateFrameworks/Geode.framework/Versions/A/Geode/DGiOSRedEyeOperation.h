@class NSArray;

@interface DGiOSRedEyeOperation : IPAOperation

@property (copy, nonatomic) NSArray *redEyeCorrections;
@property (copy, nonatomic) NSArray *autoRedEyeCorrections;

+ (id)attributes;

- (id)initWithOperation:(id)a0;
- (id)inputKeys;
- (id)outputKeys;
- (id)settingsDictionary;
- (void).cxx_destruct;
- (BOOL)isMigratable;
- (void)addCorrection:(id)a0;
- (id)_removeCorrection:(id)a0 fromArray:(id)a1;
- (id)allCorrections;
- (BOOL)applySettingsDictionary:(id)a0;
- (BOOL)isVideoCompatible;
- (BOOL)needsFullSizeMaster;
- (BOOL)needsInputImageWithoutGeometry;
- (void)removeCorrection:(id)a0;

@end
