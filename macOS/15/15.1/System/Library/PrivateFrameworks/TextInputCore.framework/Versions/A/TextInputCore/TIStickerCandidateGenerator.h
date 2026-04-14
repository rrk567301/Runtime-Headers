@class NSCache, CAContext, TISceneTaxonomyGenerator, NSObject;
@protocol OS_dispatch_queue;

@interface TIStickerCandidateGenerator : NSObject {
    TISceneTaxonomyGenerator *_sceneTaxonomyGenerator;
    NSCache *_queryToUUID;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundOperationQueue;
@property (readonly, nonatomic) CAContext *context;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (void)createContext;
- (id)_generateKeyboardCandidatesForStickerRepresentations:(id)a0 withQuery:(id)a1;
- (id)_ckAttributionInfoFromSticker:(id)a0;
- (id)_generateKeyboardCandidatesForStickers:(id)a0 withQuery:(id)a1 withRenderTraits:(id)a2;
- (void)_generateStickerCandidatesForGenerativeEmojiSearchableQueries:(id)a0 withRenderTraits:(id)a1 shouldAppend:(BOOL)a2 language:(id)a3 completionHandler:(id /* block */)a4;
- (void)_generateStickerCandidatesForTaxonomySearchableQueries:(id)a0 withRenderTraits:(id)a1 shouldAppend:(BOOL)a2 language:(id)a3 completionHandler:(id /* block */)a4;
- (struct CGImage { } *)_scaledImageForStickerImage:(struct CGImage { } *)a0 cellHeight:(double)a1;
- (void)generateStickerCandidatesForSearchableQueries:(id)a0 withRenderTraits:(id)a1 shouldAppend:(BOOL)a2 language:(id)a3 completionHandler:(id /* block */)a4;
- (void)generateStickerCandidatesForTaxonomySearchableQueries:(id)a0 generativeEmojiSearchableQueries:(id)a1 withRenderTraits:(id)a2 shouldAppend:(BOOL)a3 language:(id)a4 completionHandler:(id /* block */)a5;
- (id)generateStickerQueriesForText:(id)a0 tokenize:(BOOL)a1;
- (id)generateStickerQueriesForText:(id)a0 tokenize:(BOOL)a1 generativeEmojiSearchQueries:(BOOL)a2;
- (id)keyboardStickerWithIdentifier:(id)a0 roles:(id)a1;
- (id)stickerRepresentationsForStickerIdentifiers:(id)a0 roles:(id)a1;
- (id)stickersForStickerIdentifiers:(id)a0 roles:(id)a1;

@end
