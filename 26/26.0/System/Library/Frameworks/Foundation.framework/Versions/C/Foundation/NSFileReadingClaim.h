@class NSURL, NSFileAccessNode;

@interface NSFileReadingClaim : NSFileAccessClaim {
    NSURL *_url;
    BOOL _urlDidChange;
    unsigned long long _options;
    NSFileAccessNode *_location;
    NSFileAccessNode *_rootNode;
    long long _linkResolutionCount;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)evaluateSelfWithRootNode:(id)a0 checkSubarbitrability:(BOOL)a1;
- (BOOL)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (void)dealloc;
- (void)invokeClaimer;
- (id)initWithPurposeID:(id)a0 url:(id)a1 options:(unsigned long long)a2 claimer:(id /* block */)a3;
- (void)protectFilesAgainstEviction;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (BOOL)shouldCancelInsteadOfWaiting;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;
- (void)resolveURLThenMaybeContinueInvokingClaimer:(id /* block */)a0;
- (void)devalueSelf;
- (BOOL)blocksClaim:(id)a0;
- (void)forwardUsingConnection:(id)a0 crashHandler:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)allURLs;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (void)granted;

@end
