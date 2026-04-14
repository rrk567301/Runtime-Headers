@class NSMutableSet;

@interface OSATerminologyManager : NSObject {
    NSMutableSet *_terms;
}

+ (id)sharedTerminologyManager;

- (id)init;
- (id)_cachePath;
- (void)dealloc;
- (void)setTerms:(id)a0;
- (id)terms;
- (id)_pathForTerminologyCacheFile;
- (void)_writeTerms;
- (void)addTerms:(id)a0;
- (void)readTerms;
- (void)writeTerms;

@end
