@class NSString, MPMediaItem;

@interface _MPMusicPlayerMediaItemProxy : NSProxy

@property (readonly, nonatomic) MPMediaItem *item;
@property (readonly, nonatomic) NSString *itemIdentifier;

- (BOOL)isEqual:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithItemIdentifier:(id)a0 item:(id)a1;

@end
