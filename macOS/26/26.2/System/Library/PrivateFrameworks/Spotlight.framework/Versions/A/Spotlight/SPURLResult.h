@interface SPURLResult : SFSearchResult_SpotlightExtras

- (id)groupId;
- (id)groupName;
- (id)category;
- (unsigned __int128)score;
- (unsigned __int128)rank;
- (id)previewItemURL;
- (int)isTopHit;
- (BOOL)isLocalResult;
- (BOOL)shouldNotBeTopHit;

@end
