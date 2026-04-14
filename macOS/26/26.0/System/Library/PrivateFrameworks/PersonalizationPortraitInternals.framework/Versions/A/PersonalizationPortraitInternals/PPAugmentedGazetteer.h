@class _PASSqliteDatabase, PPContextPredictor, NSString, _PASLock;

@interface PPAugmentedGazetteer : NSObject {
    _PASSqliteDatabase *_db;
    _PASLock *_lock;
    PPContextPredictor *_contextPredictor;
    NSString *_language;
}

- (void)dealloc;
- (id)metadataForName:(id)a0;
- (void)iterExtractionsForText:(id)a0 addEntity:(id /* block */)a1 addTopic:(id /* block */)a2 addLocation:(id /* block */)a3;
- (void)iterTokensForSentence:(id)a0 block:(id /* block */)a1;
- (id)init;
- (id)initWithDatabaseAssetPath:(id)a0 gazetteerPath:(id)a1 contextPredictor:(id)a2;
- (void)iterSentencesForText:(id)a0 block:(id /* block */)a1;
- (id)initWithDatabaseAsset:(id)a0 gazetteerPath:(id)a1 contextPredictor:(id)a2;
- (void).cxx_destruct;

@end
