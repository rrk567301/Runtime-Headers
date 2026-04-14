@class NSURL, NSFileAccessNode;

@interface NSFileWritingClaim : NSFileAccessClaim {
    NSURL *_url;
    BOOL _urlDidChange;
    unsigned long long _options;
    NSFileAccessNode *_location;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (BOOL)evaluateSelfWithRootNode:(id)a0 checkSubarbitrability:(BOOL)a1;
- (void)forwardUsingConnection:(id)a0 crashHandler:(id /* block */)a1;
- (void)invokeClaimer;
- (BOOL)blocksClaim:(id)a0;
- (void)protectFilesAgainstEviction;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (void)resolveURLsThenContinueInvokingClaimer:(id /* block */)a0;
- (void)devalueSelf;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (id)initWithPurposeID:(id)a0 url:(id)a1 options:(unsigned long long)a2 claimer:(id /* block */)a3;
- (id)allURLs;
- (void)granted;

@end
