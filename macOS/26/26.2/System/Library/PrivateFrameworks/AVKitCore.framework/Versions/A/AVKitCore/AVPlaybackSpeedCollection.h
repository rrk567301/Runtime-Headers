@class NSArray, AVPlaybackSpeed;
@protocol AVPlaybackSpeedCollectionDelegate;

@interface AVPlaybackSpeedCollection : NSObject {
    id<AVPlaybackSpeedCollectionDelegate> _delegate;
    NSArray *_speeds;
    AVPlaybackSpeed *_activeSpeed;
}

@property (readonly, nonatomic) NSArray *speeds;
@property (readonly, nonatomic) AVPlaybackSpeed *selectedSpeed;

+ (id)keyPathsForValuesAffectingSelectedSpeed;
+ (id)collectionWithSpeeds:(id)a0;
+ (id)keyPathsForValuesAffectingDisplaySpeeds;
+ (id)defaultSpeedFromList:(id)a0;

- (void)selectNextPlaybackSpeed:(id)a0;
- (id)_initInternalWithSpeeds:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)setActiveSpeed:(id)a0;
- (id)description;
- (void)selectSpeed:(id)a0;
- (id)delegate;
- (id)internalDescription;
- (id)displaySpeeds;
- (void)setDelegate:(id)a0;
- (id)activeSpeed;

@end
