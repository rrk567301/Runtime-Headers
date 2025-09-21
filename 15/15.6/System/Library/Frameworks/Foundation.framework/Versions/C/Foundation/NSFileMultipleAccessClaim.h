@class NSMutableArray, NSFileAccessNode;

@interface NSFileMultipleAccessClaim : NSFileAccessClaim {
    NSMutableArray *_readingURLs;
    unsigned long long *_readingOptions;
    char *_readingURLsDidChange;
    NSMutableArray *_writingURLs;
    unsigned long long *_writingOptions;
    char *_writingURLsDidChange;
    NSMutableArray *_readingLocations;
    NSMutableArray *_writingLocations;
    NSFileAccessNode *_rootNode;
    unsigned long long _currentlyLinkResolvingURLIndex;
    long long _readingLinkResolutionCount;
}

+ (char)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allURLs;
- (void)granted;
- (char)blocksClaim:(id)a0;
- (void)devalueSelf;
- (char)evaluateSelfWithRootNode:(id)a0 checkSubarbitrability:(char)a1;
- (void)forwardUsingConnection:(id)a0 crashHandler:(id /* block */)a1;
- (id)initWithPurposeID:(id)a0 intents:(id)a1 claimer:(id /* block */)a2;
- (void)invokeClaimer;
- (char)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (char)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;
- (void)protectFilesAgainstEviction;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(id /* block */)a0;
- (char)shouldBeRevokedPriorToInvokingAccessor;
- (char)shouldCancelInsteadOfWaiting;

@end
