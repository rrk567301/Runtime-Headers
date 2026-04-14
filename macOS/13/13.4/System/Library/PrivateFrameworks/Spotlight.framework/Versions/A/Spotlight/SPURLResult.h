@interface SPURLResult : SFSearchResult_SpotlightExtras

- (id)category;
- (unsigned __int128)score;
- (id)groupName;
- (id)previewItemURL;
- (unsigned __int128)rank;
- (id)groupId;
- (BOOL)isLocalResult;
- (int)isTopHit;
- (BOOL)shouldNotBeTopHit;

@end
