@class NSArray;

@interface DGiOSRedEyeOperation : IPAOperation

@property (copy, nonatomic) NSArray *redEyeCorrections;
@property (copy, nonatomic) NSArray *autoRedEyeCorrections;

+ (id)attributes;

- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)inputKeys;
- (id)outputKeys;
- (id)settingsDictionary;
- (char)isMigratable;
- (void)addCorrection:(id)a0;
- (id)_removeCorrection:(id)a0 fromArray:(id)a1;
- (id)allCorrections;
- (char)applySettingsDictionary:(id)a0;
- (char)isVideoCompatible;
- (char)needsFullSizeMaster;
- (char)needsInputImageWithoutGeometry;
- (void)removeCorrection:(id)a0;

@end
