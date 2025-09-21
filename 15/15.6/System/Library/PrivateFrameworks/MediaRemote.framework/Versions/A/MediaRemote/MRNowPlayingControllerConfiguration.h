@class MRDestination, NSString, MRPlaybackQueueRequest;

@interface MRNowPlayingControllerConfiguration : NSObject <NSCopying>

@property (nonatomic, getter=isSingleShot) char singleShot;
@property (nonatomic, getter=isArtworkOnly) char artworkOnly;
@property (copy, nonatomic) id /* block */ discoveryPredicate;
@property (copy, nonatomic) MRPlaybackQueueRequest *playbackQueueRequest;
@property (copy, nonatomic) MRDestination *destination;
@property (nonatomic) char requestSupportedCommands;
@property (nonatomic) char requestPlaybackState;
@property (nonatomic) char requestLastPlayingDate;
@property (nonatomic) char requestClientProperties;
@property (nonatomic) char requestPlaybackQueue;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) char wantsChangeCallbacksDuringInitialLoad;
@property (copy, nonatomic) id /* block */ customDescriptionForResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)initWithOrigin:(id)a0;
- (id)initWithDestination:(id)a0;
- (id)initWithOutputDeviceUID:(id)a0;

@end
