@protocol _DKKnowledgeQuerying;

@interface ARPHomeControlCorrelationUtilities : NSObject

@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;

- (void).cxx_destruct;
- (id)initWithKnowledgeStore:(id)a0;
- (char)writeArchive:(id)a0 toFilePath:(id)a1;
- (id)firstHomeKitEventsWithPredicate:(id)a0 sortStartDateAscending:(char)a1;
- (id)homeKitAccessoriesWithPredicate:(id)a0 sortStartDateAscending:(char)a1 limit:(long long)a2;
- (id)homeKitEventsWithPredicate:(id)a0 sortStartDateAscending:(char)a1;
- (id)homeKitScenesWithPredicate:(id)a0 sortStartDateAscending:(char)a1 limit:(long long)a2;

@end
