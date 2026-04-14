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
+ (id)keyPathsForValuesAffectingSelectedSpeed;
+ (id)collectionWithSpeeds:(id)a0;
+ (id)keyPathsForValuesAffectingDisplaySpeeds;

- (id)debugDescription;
- (void)selectNextPlaybackSpeed:(id)a0;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (id)internalDescription;
- (id)description;
- (id)_initInternalWithSpeeds:(id)a0;
- (void).cxx_destruct;
- (void)setActiveSpeed:(id)a0;
- (void)selectSpeed:(id)a0;
- (id)displaySpeeds;
- (id)activeSpeed;

@end
