@class NSString, NSData;

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent> {
    char _keepAlive;
}

@property (retain, nonatomic) NSString *artworkIdentifier;
@property (retain, nonatomic) NSData *artworkData;

- (void).cxx_destruct;
- (char)beginContentAccess;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (char)isContentDiscarded;

@end
