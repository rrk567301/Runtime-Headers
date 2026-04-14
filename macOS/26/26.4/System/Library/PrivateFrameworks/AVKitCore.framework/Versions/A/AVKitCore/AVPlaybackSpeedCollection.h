@class NSArray, AVPlaybackSpeed;
@protocol AVPlaybackSpeedCollectionDelegate;

@interface AVPlaybackSpeedCollection : NSObject {
    id<AVPlaybackSpeedCollectionDelegate> _delegate;
    NSArray *_speeds;
    AVPlaybackSpeed *_activeSpeed;
}

@property (readonly, nonatomic) NSArray *speeds;
@property (readonly, nonatomic) AVPlaybackSpeed *selectedSpeed;

+ (id)collectionWithSpeeds:(id)a0;
+ (id)keyPathsForValuesAffectingDisplaySpeeds;
+ (id)defaultSpeedFromList:(id)a0;
+ (id)keyPathsForValuesAffectingSelectedSpeed;

- (id)debugDescription;
- (id)_initInternalWithSpeeds:(id)a0;
- (id)delegate;
- (id)displaySpeeds;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)internalDescription;
- (id)description;
- (void)selectSpeed:(id)a0;
- (id)activeSpeed;
- (void)selectNextPlaybackSpeed:(id)a0;
- (void)setActiveSpeed:(id)a0;

@end
