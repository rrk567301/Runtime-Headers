@interface SGDomainWhitelistChecker : NSObject

+ (id)lock;
+ (void)_setTrieFromPath:(id)a0 guardedData:(id)a1;
+ (char)isStructuredEventCandidateForEmailDomain:(id)a0;
+ (char)isStructuredEventCandidateForURL:(id)a0 title:(id)a1;
+ (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned int x5 : 27; })payloadForDomain:(id)a0;
+ (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned int x5 : 27; })payloadWithStartChar:(const char *)a0 andSize:(unsigned long long)a1;
+ (void)setTrieFromPath:(id)a0;

@end
