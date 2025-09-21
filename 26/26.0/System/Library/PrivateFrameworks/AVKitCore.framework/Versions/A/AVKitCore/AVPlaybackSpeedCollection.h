@class NSArray, AVPlaybackSpeed;
@protocol AVPlaybackSpeedCollectionDelegate;

@interface AVPlaybackSpeedCollection : NSObject {
    id<AVPlaybackSpeedCollectionDelegate> _delegate;
    NSArray *_speeds;
    AVPlaybackSpeed *_activeSpeed;
}

@property (readonly, nonatomic) NSArray *speeds;
@property (readonly, nonatomic) AVPlaybackSpeed *selectedSpeed;

+ (id)defaultSpeedFromList:(id)a0;
+ (id)collectionWithSpeeds:(id)a0;
+ (id)keyPathsForValuesAffectingSelectedSpeed;
+ (id)keyPathsForValuesAffectingDisplaySpeeds;

- (void)setActiveSpeed:(id)a0;
- (id)debugDescription;
- (void)setDelegate:(id)a0;
- (id)displaySpeeds;
- (void)selectNextPlaybackSpeed:(id)a0;
- (id)internalDescription;
- (id)description;
- (id)_initInternalWithSpeeds:(id)a0;
- (id)delegate;
- (void)selectSpeed:(id)a0;
- (id)activeSpeed;
- (void).cxx_destruct;

@end
