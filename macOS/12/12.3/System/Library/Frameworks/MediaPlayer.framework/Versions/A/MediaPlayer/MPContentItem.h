@class NSString, MPMediaItemArtwork;

@interface MPContentItem : NSObject

@property (readonly, nonatomic) void *_mediaRemoteContentItem;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) MPMediaItemArtwork *artwork;
@property (nonatomic) float playbackProgress;
@property (nonatomic, getter=isStreamingContent) BOOL streamingContent;
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (nonatomic, getter=isContainer) BOOL container;
@property (nonatomic, getter=isPlayable) BOOL playable;

+ (void)performSuppressingChangeNotifications:(id /* block */)a0;
+ (BOOL)shouldPushArtworkData;
+ (BOOL)isSuppressingChangeNotifications;
+ (void)performChangeImmediately:(id /* block */)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)_initWithMediaRemoteContentItem:(void *)a0;
- (void)_postItemChangedNotificationWithDeltaBlock:(id /* block */)a0;
- (id)createExternalRepresentation;
- (void)_loadArtwork:(id)a0 completion:(id /* block */)a1;
- (id)initWithExternalRepresentation:(id)a0;

@end
