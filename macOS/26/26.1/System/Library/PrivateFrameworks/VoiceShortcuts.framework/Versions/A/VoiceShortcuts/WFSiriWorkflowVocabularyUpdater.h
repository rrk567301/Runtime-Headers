@class NSOrderedSet;
@protocol WFDatabaseProvider;

@interface WFSiriWorkflowVocabularyUpdater : NSObject

@property (copy, nonatomic) NSOrderedSet *speakableStrings;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;

- (void)updateIfPossible;
- (id)initWithDatabaseProvider:(id)a0;
- (void).cxx_destruct;

@end
