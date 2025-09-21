@class NSURL, CESRSpeechProfileSite, NSMutableDictionary;

@interface CESRSpeechProfileSiteCache : NSObject {
    NSURL *_rootDirectoryURL;
    CESRSpeechProfileSite *_defaultSpeechProfileSite;
    NSMutableDictionary *_userExSpeechProfileSites;
    BOOL _readOnly;
}

- (void)clear;
- (void).cxx_destruct;
- (void)_cacheSpeechProfileSite:(id)a0;
- (id)initWithRootDirectoryURL:(id)a0 readOnly:(BOOL)a1;
- (BOOL)removeSpeechProfileSite:(id)a0 error:(id *)a1;
- (id)speechProfileSiteAtURL:(id)a0 error:(id *)a1;
- (id)speechProfileSiteWithUserId:(id)a0 error:(id *)a1;

@end
