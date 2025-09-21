@class NSURL, NSFileAccessNode;

@interface NSFileWritingClaim : NSFileAccessClaim {
    NSURL *_url;
    char _urlDidChange;
    unsigned long long _options;
    NSFileAccessNode *_location;
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
- (id)initWithPurposeID:(id)a0 url:(id)a1 options:(unsigned long long)a2 claimer:(id /* block */)a3;
- (void)invokeClaimer;
- (char)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (char)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;
- (void)protectFilesAgainstEviction;
- (void)resolveURLsThenContinueInvokingClaimer:(id /* block */)a0;

@end
