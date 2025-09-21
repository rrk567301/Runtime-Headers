@class NSURL, CESRSpeechProfileSite, NSMutableDictionary;

@interface CESRSpeechProfileSiteCache : NSObject {
    NSURL *_rootDirectoryURL;
    CESRSpeechProfileSite *_defaultSpeechProfileSite;
    NSMutableDictionary *_userExSpeechProfileSites;
    char _readOnly;
}

- (void).cxx_destruct;
- (void)clear;
- (void)_cacheSpeechProfileSite:(id)a0;
- (id)initWithRootDirectoryURL:(id)a0 readOnly:(char)a1;
- (char)removeSpeechProfileSite:(id)a0 error:(id *)a1;
- (id)speechProfileSiteAtURL:(id)a0 error:(id *)a1;
- (id)speechProfileSiteWithUserId:(id)a0 error:(id *)a1;

@end
