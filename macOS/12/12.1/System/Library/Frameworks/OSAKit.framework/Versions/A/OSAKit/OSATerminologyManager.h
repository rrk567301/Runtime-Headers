@class NSMutableSet;

@interface OSATerminologyManager : NSObject {
    NSMutableSet *_terms;
}

+ (id)sharedTerminologyManager;

- (void)dealloc;
- (id)init;
- (id)_cachePath;
- (id)terms;
- (void)setTerms:(id)a0;
- (void)readTerms;
- (void)_writeTerms;
- (id)_pathForTerminologyCacheFile;
- (void)addTerms:(id)a0;
- (void)writeTerms;

@end
