@interface FCModifyAudioPlaylistCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithItems:(id)a0 merge:(char)a1;
- (char)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
