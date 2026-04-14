@class NSURL;

@interface PAMediaConversionServiceResourceURLReference : NSObject

@property (retain) NSURL *url;
@property BOOL mustStopAccessingURL;
@property BOOL shouldDeleteOnDeallocation;

+ (id)referenceWithURL:(id)a0;
+ (id)referenceWithDictionaryRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)getPathHash:(unsigned long long *)a0 lastPathComponent:(id *)a1 forDictionaryRepresentation:(id)a2;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (void)getPathHash:(unsigned long long *)a0 lastPathComponent:(id *)a1;
- (BOOL)getFileSize:(unsigned long long *)a0 error:(id *)a1;

@end
