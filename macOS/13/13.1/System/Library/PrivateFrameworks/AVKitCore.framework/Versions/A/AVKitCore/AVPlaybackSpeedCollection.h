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

- (id)description;
- (id)debugDescription;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)displaySpeeds;
- (void)setActiveSpeed:(id)a0;
- (id)internalDescription;
- (id)activeSpeed;
- (void)selectNextPlaybackSpeed:(id)a0;
- (void)selectSpeed:(id)a0;
- (id)_initInternalWithSpeeds:(id)a0;

@end
