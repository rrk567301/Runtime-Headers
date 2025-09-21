@class NSString;

@interface VCRateControlMachineLearningLocalTrainingDataProducer : NSObject {
    NSString *_databasePath;
    struct sqlite3 { } *_database;
    NSString *_directoryPath;
    NSString *_recipeID;
}

- (void)dealloc;
- (BOOL)checkCountQuery:(char *)a0 withDatabase:(struct sqlite3 { } *)a1 minValue:(int)a2 maxValue:(int)a3;
- (id)initWithDataStore:(id)a0 recipeID:(id)a1;
- (void)removeDatabaseFile;
- (void)runTrainingDataPostProcessing:(id)a0;
- (void)setUpTrainingDataForPlugin;
- (BOOL)shouldGenerateTrainingDataWithDatabase:(struct sqlite3 { } *)a0;

@end
