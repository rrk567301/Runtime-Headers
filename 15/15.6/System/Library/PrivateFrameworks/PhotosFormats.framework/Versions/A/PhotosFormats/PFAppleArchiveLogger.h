@interface PFAppleArchiveLogger : PFAppleArchiveStream

+ (char)encodeFile:(id)a0 destination:(id)a1 error:(id *)a2;

- (char)flush:(id *)a0;
- (id)initWithArchiveURL:(id)a0;
- (char)encodeBuffer:(const void *)a0 size:(unsigned long long)a1 error:(id *)a2;

@end
