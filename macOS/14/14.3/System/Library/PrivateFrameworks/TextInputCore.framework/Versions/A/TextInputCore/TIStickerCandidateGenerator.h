@class CAContext, TISceneTaxonomyGenerator, NSCache;

@interface TIStickerCandidateGenerator : NSObject {
    TISceneTaxonomyGenerator *_sceneTaxonomyGenerator;
    NSCache *_queryToUUID;
}

@property (readonly, nonatomic) CAContext *context;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (void)createContext;
- (BOOL)_facadeSupportsStickersWithIdentifiers;
- (struct CGImage { } *)_scaledImageForStickerImage:(struct CGImage { } *)a0 height:(double)a1;
- (id)ckAttributionInfoFromSticker:(id)a0;
- (void)createSceneTaxonomyGenerator;
- (id)generateKeyboardCandidatesForStickerRepresentations:(id)a0 withQuery:(id)a1;
- (id)generateKeyboardCandidatesForStickers:(id)a0 withQuery:(id)a1 withRenderTraits:(id)a2;
- (void)generateStickerCandidatesForSearchableQueries:(id)a0 withRenderTraits:(id)a1 shouldAppend:(BOOL)a2 language:(id)a3 completionHandler:(id /* block */)a4;
- (id)generateStickerQueriesForText:(id)a0 tokenize:(BOOL)a1;
- (id)keyboardStickerWithIdentifier:(id)a0 roles:(id)a1;
- (id)stickerRepresentationsForStickerIdentifiers:(id)a0 roles:(id)a1;
- (id)stickersForStickerIdentifiers:(id)a0 roles:(id)a1;

@end
