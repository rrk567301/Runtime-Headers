@interface SPURLResult : SFSearchResult_SpotlightExtras

- (id)category;
- (unsigned __int128)rank;
- (id)groupId;
- (id)groupName;
- (unsigned __int128)score;
- (id)previewItemURL;
- (int)isTopHit;
- (BOOL)isLocalResult;
- (BOOL)shouldNotBeTopHit;

@end
