@class NSURL;

@interface PAMediaConversionServiceResourceURLReference : NSObject

@property (retain) NSURL *url;
@property char mustStopAccessingURL;
@property char shouldDeleteOnDeallocation;

+ (char)getPathHash:(unsigned long long *)a0 lastPathComponent:(id *)a1 forDictionaryRepresentation:(id)a2;
+ (id)referenceWithDictionaryRepresentation:(id)a0 error:(id *)a1;
+ (id)referenceWithURL:(id)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (char)getFileSize:(unsigned long long *)a0 error:(id *)a1;
- (void)getPathHash:(unsigned long long *)a0 lastPathComponent:(id *)a1;

@end
