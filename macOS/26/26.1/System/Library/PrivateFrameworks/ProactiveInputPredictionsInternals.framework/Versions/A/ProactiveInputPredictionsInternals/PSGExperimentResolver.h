@class NSDictionary, _PASLock, TRIClient;

@interface PSGExperimentResolver : NSObject {
    _PASLock *_responseSuggestionsConfigLock;
    _PASLock *_wordBoundaryConfigLock;
    TRIClient *_trialClient;
}

@property (readonly, nonatomic) NSDictionary *zkwLangAndNamespaces;
@property (readonly, nonatomic) NSDictionary *wordBoundaryLangAndNamespaces;

+ (id)sharedInstance;
+ (id)sharedZKWQueue;
+ (id)sharedWordBoundaryQueue;

- (void)warmupForLocale:(id)a0;
- (id)getWordBoundarySuggestionsExperimentConfig:(id)a0;
- (id)getResponseSuggestionsExperimentConfig:(id)a0 shouldDownloadAssets:(BOOL)a1;
- (id)_getDefaultResponseSuggestionsExperimentConfig:(id)a0;
- (id)getResponseSuggestionsExperimentConfig:(id)a0;
- (id)getWordBoundarySuggestionsExperimentConfig:(id)a0 shouldDownloadAssets:(BOOL)a1;
- (void).cxx_destruct;
- (id)_getDefaultWordBoundarySuggestionsExperimentConfig:(id)a0;
- (id)init;

@end
