@class NSCharacterSet;

@interface CHRemoveSpacesFromEnglishAndKoreanParticlesStep : CHPostprocessingStepModifyingOriginalTokens {
    NSCharacterSet *_koreanParticlesCharSet;
}

- (void).cxx_destruct;
- (id)init;
- (id)process:(id)a0 options:(id)a1;

@end
