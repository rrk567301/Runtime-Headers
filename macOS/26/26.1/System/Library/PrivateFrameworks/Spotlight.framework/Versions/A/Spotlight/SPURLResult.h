@interface SPURLResult : SFSearchResult_SpotlightExtras

- (unsigned __int128)rank;
- (id)groupName;
- (id)groupId;
- (unsigned __int128)score;
- (id)category;
- (id)previewItemURL;
- (int)isTopHit;
- (BOOL)isLocalResult;
- (BOOL)shouldNotBeTopHit;

@end
