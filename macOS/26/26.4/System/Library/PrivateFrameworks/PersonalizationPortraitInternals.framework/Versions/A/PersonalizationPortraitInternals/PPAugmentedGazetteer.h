@class _PASSqliteDatabase, PPContextPredictor, NSString, _PASLock;

@interface PPAugmentedGazetteer : NSObject {
    _PASSqliteDatabase *_db;
    _PASLock *_lock;
    PPContextPredictor *_contextPredictor;
    NSString *_language;
}

- (id)metadataForName:(id)a0;
- (id)initWithDatabaseAssetPath:(id)a0 gazetteerPath:(id)a1 contextPredictor:(id)a2;
- (void).cxx_destruct;
- (void)iterExtractionsForText:(id)a0 addEntity:(id /* block */)a1 addTopic:(id /* block */)a2 addLocation:(id /* block */)a3;
- (id)initWithDatabaseAsset:(id)a0 gazetteerPath:(id)a1 contextPredictor:(id)a2;
- (id)init;
- (void)iterTokensForSentence:(id)a0 block:(id /* block */)a1;
- (void)iterSentencesForText:(id)a0 block:(id /* block */)a1;
- (void)dealloc;

@end
