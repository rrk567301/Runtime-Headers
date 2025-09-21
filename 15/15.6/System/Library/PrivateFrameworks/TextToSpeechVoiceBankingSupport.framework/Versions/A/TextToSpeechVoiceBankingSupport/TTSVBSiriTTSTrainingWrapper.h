@class NSBundle;

@interface TTSVBSiriTTSTrainingWrapper : NSObject

@property (class, readonly, nonatomic) char isSiriTrainingAvailable;
@property (class, readonly, nonatomic) NSBundle *siriTTSTrainingBundle;

@end
