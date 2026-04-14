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
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (void)devalueSelf;
- (void)protectFilesAgainstEviction;
- (BOOL)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (BOOL)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (id)initWithPurposeID:(id)a0 url:(id)a1 options:(unsigned long long)a2 claimer:(id /* block */)a3;
- (void)forwardUsingConnection:(id)a0 crashHandler:(id /* block */)a1;
- (id)allURLs;
- (void)encodeWithCoder:(id)a0;
- (void)invokeClaimer;
- (void)resolveURLThenMaybeContinueInvokingClaimer:(id /* block */)a0;
- (BOOL)blocksClaim:(id)a0;
- (BOOL)shouldCancelInsteadOfWaiting;
- (void)granted;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;

@end
