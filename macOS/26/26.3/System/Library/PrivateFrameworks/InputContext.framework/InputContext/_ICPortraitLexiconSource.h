@class PPNamedEntityStore, PPContactStore, PPContactNameRecordLoadingDelegate, _ICLexiconManager, PPNamedEntityRecordLoadingDelegate;

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing, _ICFeedbackAccepting> {
    _ICLexiconManager *_manager;
    PPContactStore *_contactStore;
    PPContactNameRecordLoadingDelegate *_contactDelegate;
    PPNamedEntityStore *_namedEntityStore;
    PPNamedEntityRecordLoadingDelegate *_namedEntityDelegate;
}

- (void)warmUp;
- (id)init;
- (void)hibernate;
- (void).cxx_destruct;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id)_makeContactDelegate;
- (id)_makeNamedEntityDelegate;
- (id)_makePPNamedEntityStore;
- (void)startLoadingWithManager:(id)a0;

@end
