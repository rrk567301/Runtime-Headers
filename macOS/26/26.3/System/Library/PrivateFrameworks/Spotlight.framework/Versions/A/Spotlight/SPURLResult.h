@interface SPURLResult : SFSearchResult_SpotlightExtras

- (id)groupName;
- (unsigned __int128)rank;
- (unsigned __int128)score;
- (id)category;
- (id)groupId;
- (id)previewItemURL;
- (int)isTopHit;
- (BOOL)isLocalResult;
- (BOOL)shouldNotBeTopHit;

@end
