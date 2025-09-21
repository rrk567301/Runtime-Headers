@class NSString, MTUpNextScorePrototype;

@interface MTUpNextResult : NSObject

@property (copy, nonatomic) NSString *episodeUuid;
@property (nonatomic) double modifiedDate;
@property (nonatomic) double modifiedDateScore;
@property (retain, nonatomic) MTUpNextScorePrototype *upNextScore;
@property (nonatomic) char needsUpdate;

- (void).cxx_destruct;
- (void)updateFor:(id)a0;

@end
