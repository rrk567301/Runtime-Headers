@class NSOrderedSet;
@protocol WFDatabaseProvider;

@interface WFSiriWorkflowVocabularyUpdater : NSObject

@property (copy, nonatomic) NSOrderedSet *speakableStrings;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;

- (id)initWithDatabaseProvider:(id)a0;
- (void).cxx_destruct;
- (void)updateIfPossible;

@end
