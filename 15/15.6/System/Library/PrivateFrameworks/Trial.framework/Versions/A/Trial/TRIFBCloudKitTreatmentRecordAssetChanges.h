@interface TRIFBCloudKitTreatmentRecordAssetChanges : NSObject {
    unsigned char _changeTypeContainer;
    unsigned char _replacementContainer;
    unsigned char _changeTypeTreatmentId;
    unsigned int _replacementTreatmentId;
    unsigned char _changeTypeAssetIndex;
    unsigned int _replacementAssetIndex;
    unsigned char _changeTypeHasCkIndex;
    char _replacementHasCkIndex;
}

- (void)omitAssetIndex;
- (void)omitContainer;
- (void)omitHasCkIndex;
- (void)preserveAssetIndex;
- (void)preserveContainer;
- (void)preserveHasCkIndex;
- (void)preserveTreatmentId;
- (void)replaceAssetIndex:(unsigned int)a0;
- (void)replaceContainer:(unsigned char)a0;
- (void)replaceHasCkIndex:(char)a0;
- (void)replaceTreatmentId:(id)a0;

@end
