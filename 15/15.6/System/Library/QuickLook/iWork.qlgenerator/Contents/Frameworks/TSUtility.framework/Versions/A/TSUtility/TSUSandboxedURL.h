@class NSURL, NSString;

@interface TSUSandboxedURL : NSObject <NSCopying, TSUURLWrapper> {
    NSURL *_URL;
    char _URLStartedAccessingSecurityScopedResource;
}

@property (readonly) char isUbiquitous;
@property (readonly) char isDocumentUploaded;
@property (readonly) char isQuotaErrorPreventingUpload;
@property (readonly) NSURL *URL;
@property (readonly) char hasSandboxAccess;
@property (readonly) TSUSandboxedURL *sandboxedURL;
@property (readonly) NSURL *URLIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sandboxedURLByResolvingBookmarkData:(id)a0 options:(unsigned long long)a1 relativeToURL:(id)a2 bookmarkDataIsStale:(char *)a3 error:(id *)a4;
+ (id)sandboxedURLByResolvingBookmarkData:(id)a0 relativeToURL:(id)a1 bookmarkDataIsStale:(char *)a2 error:(id *)a3;
+ (void)sandboxedURLByResolvingBookmarkData:(id)a0 usingQueue:(id)a1 timeout:(double)a2 options:(unsigned long long)a3 relativeToURL:(id)a4 completionQueue:(id)a5 completionHandler:(id /* block */)a6;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initByResolvingBookmarkData:(id)a0 options:(unsigned long long)a1 relativeToURL:(id)a2 bookmarkDataIsStale:(char *)a3 error:(id *)a4;
- (char)hasUnresolvedConflicts;
- (id)normalize;
- (char)hasUnresolvedConflicts:(out char *)a0 error:(id *)a1;
- (id)initByResolvingBookmarkData:(id)a0 relativeToURL:(id)a1 bookmarkDataIsStale:(char *)a2 error:(id *)a3;
- (char)isDocumentUploaded:(out char *)a0 error:(id *)a1;
- (char)isShared:(out char *)a0 logContext:(id)a1 error:(id *)a2;
- (char)isUbiquitous:(out char *)a0 error:(id *)a1;
- (char)isUbiquitous:(out char *)a0 promised:(char)a1 error:(id *)a2;
- (char)isUbiquitousPromised:(char)a0;
- (id)originalSandboxedURLForNormalizing;

@end
