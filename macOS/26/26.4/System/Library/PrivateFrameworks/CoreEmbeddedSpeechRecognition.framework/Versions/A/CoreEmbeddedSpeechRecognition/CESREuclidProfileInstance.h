@class NSURL, CCSetChangeRegistry, NSLocale;

@interface CESREuclidProfileInstance : NSObject {
    void /* unknown type, empty encoding */ _locale;
    void /* unknown type, empty encoding */ _speechProfileSiteURL;
    void /* unknown type, empty encoding */ $__lazy_storage_$_client;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSURL *speechProfileSiteURL;
@property (nonatomic, readonly) CCSetChangeRegistry *changeRegistry;

+ (id)loadInstanceAtSpeechProfileSiteURL:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (BOOL)updateWithSets:(id)a0;
- (id)initWithSpeechProfileSiteURL:(id)a0 locale:(id)a1;
- (BOOL)removeDatabase;

@end
