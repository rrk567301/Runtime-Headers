@class TSUSandboxedURL;

@interface TSUNormalizedSandboxedURL : TSUSandboxedURL {
    TSUSandboxedURL *_originalSandboxedURL;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)originalSandboxedURLForNormalizing;
- (id)initWithURL:(id)a0 originalSandboxedURL:(id)a1;
- (BOOL)hasSandboxAccess;

@end
