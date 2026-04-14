@class TSUSandboxedURL;

@interface TSUNormalizedSandboxedURL : TSUSandboxedURL {
    TSUSandboxedURL *_originalSandboxedURL;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)hasSandboxAccess;
- (id)originalSandboxedURLForNormalizing;
- (id)initWithURL:(id)a0 originalSandboxedURL:(id)a1;

@end
