@class NSString, NSData;

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent> {
    BOOL _keepAlive;
}

@property (retain, nonatomic) NSString *artworkIdentifier;
@property (retain, nonatomic) NSData *artworkData;

- (void)endContentAccess;
- (BOOL)isContentDiscarded;
- (BOOL)beginContentAccess;
- (void)discardContentIfPossible;
- (void).cxx_destruct;

@end
