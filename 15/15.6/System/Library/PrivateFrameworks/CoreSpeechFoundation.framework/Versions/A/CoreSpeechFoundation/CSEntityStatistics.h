@class NSSet;

@interface CSEntityStatistics : NSObject

@property (readonly, nonatomic) NSSet *entities;
@property (readonly, nonatomic) NSSet *entitiesPresentInVicinity;
@property (readonly, nonatomic) NSSet *entitiesIsGazing;
@property (readonly, nonatomic) NSSet *entitiesIsSpeaking;
@property (readonly, nonatomic) NSSet *entitiesIsFacing;

- (void).cxx_destruct;
- (char)isEntityInViewFacing;
- (char)isEntityInViewGazing;
- (char)isEntityInViewSpeaking;

@end
