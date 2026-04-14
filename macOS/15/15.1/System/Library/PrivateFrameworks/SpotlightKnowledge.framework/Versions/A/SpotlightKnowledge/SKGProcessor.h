@class NSObject;
@protocol OS_dispatch_queue;

@interface SKGProcessor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedProcessor;
+ (id)embeddingVersionDataWithVersion:(id)a0;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)queue;
- (void)setQueue:(id)a0;
- (id)copyEmbeddingVersionFromRecord:(id)a0;
- (id)copyBundleIdentifierFromRecord:(id)a0;
- (id)copyKeyphraseVersionFromRecord:(id)a0;
- (BOOL)canGenerateEmbeddingsForRecord:(id)a0 bundleID:(id)a1;
- (id)copyAuthorFromRecord:(id)a0;
- (id)copyContentTypeFromRecord:(id)a0;
- (id)copyContentURLFromRecord:(id)a0;
- (id)copyDescriptionContentFromRecord:(id)a0;
- (id)copyEmbeddingModelVersionFromRecord:(id)a0;
- (id)copyFilePathFromRecord:(id)a0;
- (id)copyFileProviderIDFromRecord:(id)a0;
- (id)copyLanguageFromRecord:(id)a0;
- (id)copyNumberValueFromRecord:(id)a0 key:(id)a1;
- (id)copyPeopleVersionFromRecord:(id)a0;
- (id)copyPersonaFromRecord:(id)a0;
- (id)copyProtectionClassFromRecord:(id)a0;
- (id)copyReferenceIdentifierFromRecord:(id)a0;
- (id)copySnippetFromRecord:(id)a0;
- (id)copyStringValueFromRecord:(id)a0 key:(id)a1;
- (id)copyTextContentFromRecord:(id)a0;
- (id)copyTitleFromRecord:(id)a0;
- (id)dateFromRecord:(id)a0 key:(id)a1;
- (BOOL)extractContentFromRecord:(id)a0 bundleID:(id)a1 content:(id *)a2 maxChunkCountPtr:(unsigned long long *)a3;
- (BOOL)extractContentFromRecordForCalendar:(id)a0 bundleID:(id)a1 content:(id *)a2 maxChunkCountPtr:(unsigned long long *)a3;
- (BOOL)extractContentFromRecordForMail:(id)a0 bundleID:(id)a1 content:(id *)a2 maxChunkCountPtr:(unsigned long long *)a3;
- (BOOL)extractContentFromRecordForMessages:(id)a0 bundleID:(id)a1 content:(id *)a2 maxChunkCountPtr:(unsigned long long *)a3;
- (BOOL)extractContentFromRecordForSafari:(id)a0 bundleID:(id)a1 content:(id *)a2 maxChunkCountPtr:(unsigned long long *)a3;
- (BOOL)needsEmbeddingsForRecord:(id)a0 bundleID:(id)a1;
- (BOOL)needsKeyphrasesForRecord:(id)a0 bundleID:(id)a1;
- (BOOL)needsPriorityForRecord:(id)a0 bundleID:(id)a1;
- (BOOL)recordContainsValue:(id)a0 key:(id)a1;
- (BOOL)recordHasTextContent:(id)a0;
- (BOOL)recordIsCurrent:(id)a0 toCalendarUnit:(unsigned long long)a1 maxOffset:(unsigned long long)a2 checkFuture:(BOOL)a3 dateKeys:(id)a4;
- (BOOL)recordIsRecent:(id)a0 toCalendarUnit:(unsigned long long)a1 maxOffset:(unsigned long long)a2 dateKeys:(id)a3;
- (BOOL)recordIsValid:(id)a0;
- (BOOL)shouldGenerateEmbeddingsForPastRecord:(id)a0 bundleID:(id)a1;
- (BOOL)shouldGenerateEmbeddingsForRecord:(id)a0 bundleID:(id)a1;
- (BOOL)shouldGenerateKeyphrasesForRecord:(id)a0 bundleID:(id)a1;

@end
