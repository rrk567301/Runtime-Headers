@interface SPURLResult : SFSearchResult_SpotlightExtras

- (id)groupId;
- (unsigned __int128)rank;
- (id)category;
- (id)groupName;
- (unsigned __int128)score;
- (id)previewItemURL;
- (int)isTopHit;
- (BOOL)isLocalResult;
- (BOOL)shouldNotBeTopHit;

@end
