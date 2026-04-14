@class NSOrderedSet;
@protocol WFDatabaseProvider;

@interface WFSiriWorkflowVocabularyUpdater : NSObject

@property (copy, nonatomic) NSOrderedSet *speakableStrings;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;

- (void).cxx_destruct;
- (void)updateIfPossible;
- (id)initWithDatabaseProvider:(id)a0;

@end
