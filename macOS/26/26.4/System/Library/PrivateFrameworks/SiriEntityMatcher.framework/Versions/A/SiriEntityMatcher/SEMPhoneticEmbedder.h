@interface SEMPhoneticEmbedder : NSObject {
    void /* unknown type, empty encoding */ phoneticEmbedder;
}

+ (BOOL)isAssetAvailabeForLocale:(id)a0;

- (long long)modelVersion;
- (void).cxx_destruct;
- (id)init;
- (long long)maxInputLength;
- (long long)embeddingDimensions;
- (id)embeddingForInput:(id)a0 error:(id *)a1;
- (id)initWithLocale:(id)a0 clientId:(id)a1 usePhonemeInput:(BOOL)a2;

@end
