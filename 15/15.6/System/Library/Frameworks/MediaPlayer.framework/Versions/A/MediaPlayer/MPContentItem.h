@class NSString, MPMediaItemArtwork;

@interface MPContentItem : NSObject

@property (readonly, nonatomic) void *_mediaRemoteContentItem;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) MPMediaItemArtwork *artwork;
@property (nonatomic) float playbackProgress;
@property (nonatomic, getter=isStreamingContent) char streamingContent;
@property (nonatomic, getter=isExplicitContent) char explicitContent;
@property (nonatomic, getter=isContainer) char container;
@property (nonatomic, getter=isPlayable) char playable;

+ (char)isSuppressingChangeNotifications;
+ (void)performChangeImmediately:(id /* block */)a0;
+ (void)performSuppressingChangeNotifications:(id /* block */)a0;
+ (char)shouldPushArtworkData;

- (void)dealloc;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithExternalRepresentation:(id)a0;
- (id)_initWithMediaRemoteContentItem:(void *)a0;
- (void)_loadArtwork:(id)a0 completion:(id /* block */)a1;
- (void)_postItemChangedNotificationWithDeltaBlock:(id /* block */)a0;
- (id)createExternalRepresentation;
- (void)postChangeNotificationImmediately:(char)a0;

@end
