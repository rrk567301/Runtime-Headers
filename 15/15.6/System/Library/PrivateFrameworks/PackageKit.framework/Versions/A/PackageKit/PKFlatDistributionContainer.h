@class NSString;

@interface PKFlatDistributionContainer : PKMutableDistributionContainer {
    NSString *_path;
}

- (void)dealloc;
- (char)commitReturningError:(id *)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (char)setStringsData:(id)a0 forLocalization:(id)a1;
- (id)_resourceDataForKey:(id)a0;
- (id)initWithPath:(id)a0 forWriting:(char)a1 error:(id *)a2;
- (char)setDistributionFromContainer:(id)a0;
- (char)setResourceData:(id)a0 forKey:(id)a1 forLocalization:(id)a2;
- (id)stringsDictionary;

@end
