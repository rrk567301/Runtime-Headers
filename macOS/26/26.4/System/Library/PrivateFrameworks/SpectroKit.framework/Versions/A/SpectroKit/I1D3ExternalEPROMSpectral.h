@interface I1D3ExternalEPROMSpectral : NSObject {
    float _spectralData[351];
}

- (void)validate;
- (void)print;
- (id)init;
- (id)description;
- (int)parse:(id)a0 atOffset:(int)a1;
- (float *)spectralData;
- (id)spectralDataAsNumberArray;
- (id)spectralDataAsNumberArrayWithMultiplier:(id)a0;

@end
