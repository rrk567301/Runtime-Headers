@class NSURL, NSFileAccessNode;

@interface NSFileReadingWritingClaim : NSFileAccessClaim {
    NSURL *_readingURL;
    char _readingURLDidChange;
    unsigned long long _readingOptions;
    NSURL *_writingURL;
    char _writingURLDidChange;
    unsigned long long _writingOptions;
    NSFileAccessNode *_readingLocation;
    NSFileAccessNode *_writingLocation;
    NSFileAccessNode *_rootNode;
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
- (id)initWithPurposeID:(id)a0 readingURL:(id)a1 options:(unsigned long long)a2 writingURL:(id)a3 options:(unsigned long long)a4 claimer:(id /* block */)a5;
- (void)invokeClaimer;
- (char)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (char)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;
- (void)protectFilesAgainstEviction;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(id /* block */)a0;
- (char)shouldCancelInsteadOfWaiting;

@end
