@class NSMutableDictionary;

@interface MSUDataAccessorSymbolicPathResolver : NSObject {
    NSMutableDictionary *_overrides;
}

+ (id)resolvedSymbol:(id)a0 error:(id *)a1;
+ (id)symbolicPathResolver;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)overrideSymbol:(id)a0 resolvedPath:(id)a1;
- (id)resolve:(id)a0 error:(id *)a1;

@end
