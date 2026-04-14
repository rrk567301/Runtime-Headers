@class NSOrderedSet;
@protocol WFDatabaseProvider;

@interface WFSiriWorkflowVocabularyUpdater : NSObject

@property (copy, nonatomic) NSOrderedSet *speakableStrings;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;

- (void).cxx_destruct;
- (id)initWithDatabaseProvider:(id)a0;
- (void)updateIfPossible;

@end
