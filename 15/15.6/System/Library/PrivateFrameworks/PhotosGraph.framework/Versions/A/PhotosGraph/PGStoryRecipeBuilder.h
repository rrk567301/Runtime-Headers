@interface PGStoryRecipeBuilder : NSObject

+ (id)_appleSongAssetFromAppleMusicCuration:(id)a0;
+ (id)_keyFlexSongAssetFromFlexMusicCuration:(id)a0;
+ (id)_storyRecipeWithKeyAppleMusicSongAsset:(id)a0 keyFlexSongAsset:(id)a1 isAppleMusicSubscriber:(char)a2 shouldAvoidColorGrading:(char)a3;
+ (id)storyRecipeForMemory:(id)a0 appleMusicCuration:(id)a1 flexMusicCuration:(id)a2 shouldAvoidColorGrading:(char)a3 isAppleMusicSubscriber:(char)a4 error:(id *)a5;

@end
