@class NSData;

@interface SGRe2Lazy : SGRe2 {
    NSData *_regexp;
}

- (id)description;
- (void).cxx_destruct;
- (id)hashId;
- (id)existsInUtf8:(const char *)a0;
- (id)initWithRegexp:(id)a0;
- (id)initWithRegexpData:(id)a0;
- (id)matchesUtf8:(const char *)a0;
- (int)_enumerateMatchesInUtf8:(const char *)a0 fromString:(id)a1 ngroups:(unsigned long long)a2 block:(id /* block */)a3;

@end
