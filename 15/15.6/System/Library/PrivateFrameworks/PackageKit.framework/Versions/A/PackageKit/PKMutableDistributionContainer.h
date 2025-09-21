@class NSError;

@interface PKMutableDistributionContainer : PKDistributionContainer

@property (retain) NSError *error;

- (void)dealloc;
- (char)commitReturningError:(id *)a0;
- (void)setDistribution:(id)a0;
- (char)setStringsData:(id)a0 forLocalization:(id)a1;
- (id)initForWritingToArchive:(id)a0;
- (id)initForWritingToPath:(id)a0;
- (char)setDistributionFromContainer:(id)a0;
- (char)setResourceData:(id)a0 forKey:(id)a1 forLocalization:(id)a2;
- (char)storeResourcesAtPath:(id)a0 forLocalization:(id)a1;

@end
