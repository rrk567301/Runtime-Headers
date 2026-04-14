@class NSObject;
@protocol OS_dispatch_queue;

@interface TIFilterParameterLoader : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadQueue;

- (id)init;
- (void).cxx_destruct;
- (void)loadCandidateFilterSpecificationForLanguageIdentifier:(id)a0 targetQueue:(id)a1 completion:(id /* block */)a2;
- (id)loadCandidateFilterSpecificationForLanguageIdentifier:(id)a0;
- (id)loadContentsForPlistWithLanguage:(id)a0;
- (id)parameterPlistForLanguage:(id)a0;
- (id)universalParameterPlist;
- (id)parameterOverridesFolderURL;

@end
