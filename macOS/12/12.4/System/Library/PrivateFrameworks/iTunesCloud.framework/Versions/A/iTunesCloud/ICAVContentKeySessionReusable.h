@class NSString, AVContentKeySession, NSMutableSet;

@interface ICAVContentKeySessionReusable : NSObject

@property (retain, nonatomic) NSString *reuseIdentifier;
@property (nonatomic) long long batchNumber;
@property (retain, nonatomic) AVContentKeySession *avContentKeySession;
@property (nonatomic) long long useCount;
@property (retain, nonatomic) NSMutableSet *processedKeyIdentifiers;
@property (nonatomic) BOOL hasPrefetchKey;
@property (nonatomic) BOOL hasFailedKeys;
@property (nonatomic) long long pendingKeyRequestCount;
@property (readonly, nonatomic) BOOL isReusable;

- (id)description;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)a0 batchNumber:(long long)a1;
- (void)cleanupForReuse;
- (void)didProvideContentKeyRequest;
- (void)contentKeyRequestDidSucceed:(BOOL)a0;
- (void)contentKeyRequestDidFail;

@end
