@class NSString;

@interface PRLexicon : NSObject {
    NSString *_localization;
    NSString *_unigramsPath;
    NSString *_name;
    const void *_lexicon;
}

@property (readonly) NSString *name;

+ (id)lexiconWithLocalization:(id)a0 unigramsPath:(id)a1;
+ (id)lexiconWithLexicon:(const void *)a0;
+ (id)lexiconWithName:(id)a0 words:(id)a1;

- (void)dealloc;
- (id)description;
- (id)initWithLexicon:(const void *)a0;
- (struct _LXLexicon { } *)lexicon;
- (unsigned int)tokenIDForString:(id)a0;
- (id)stringForTokenID:(unsigned int)a0;
- (BOOL)getProbabilityForString:(id)a0 probability:(double *)a1;
- (BOOL)getProbabilityForTokenID:(unsigned int)a0 probability:(double *)a1;
- (void)enumerateCompletionsForPrefix:(id)a0 maxCompletions:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)enumerateCompletionEntriesForPrefix:(id)a0 maxCompletions:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)initWithLocalization:(id)a0 unigramsPath:(id)a1;
- (id)initWithName:(id)a0 words:(id)a1;
- (id)createCursor;
- (void)enumerateEntriesForString:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateCorrectionEntriesForWord:(id)a0 maxCorrections:(unsigned long long)a1 withBlock:(id /* block */)a2;

@end
