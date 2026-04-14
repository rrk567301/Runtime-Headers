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
- (BOOL)isMigratable;
- (void)addCorrection:(id)a0;
- (BOOL)needsInputImageWithoutGeometry;
- (BOOL)needsFullSizeMaster;
- (BOOL)isVideoCompatible;
- (BOOL)applySettingsDictionary:(id)a0;
- (id)allCorrections;
- (id)_removeCorrection:(id)a0 fromArray:(id)a1;
- (void)removeCorrection:(id)a0;

@end
