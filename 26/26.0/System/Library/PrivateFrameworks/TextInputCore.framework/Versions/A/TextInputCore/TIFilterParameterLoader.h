@class NSObject;
@protocol OS_dispatch_queue;

@interface TIFilterParameterLoader : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadQueue;

- (id)universalParameterPlist;
- (id)loadContentsForPlistWithLanguage:(id)a0;
- (id)init;
- (id)parameterPlistForLanguage:(id)a0;
- (id)parameterOverridesFolderURL;
- (id)loadCandidateFilterSpecificationForLanguageIdentifier:(id)a0;
- (void)loadCandidateFilterSpecificationForLanguageIdentifier:(id)a0 targetQueue:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
