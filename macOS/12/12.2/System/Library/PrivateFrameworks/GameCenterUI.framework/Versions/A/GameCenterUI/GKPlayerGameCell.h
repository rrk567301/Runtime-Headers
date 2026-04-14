@class NSTextField;

@interface GKPlayerGameCell : GKBaseGameCell

@property (retain, nonatomic) NSTextField *statsLabel;
@property (retain, nonatomic) NSTextField *dateLabel;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didUpdateModel;
- (void)configureContextMenu:(id)a0 indexPath:(id)a1;
- (id)statText;
- (id)achievementsStringWithGameRecord:(id)a0;
- (id)leaderboardStringWithGameRecord:(id)a0;

@end
