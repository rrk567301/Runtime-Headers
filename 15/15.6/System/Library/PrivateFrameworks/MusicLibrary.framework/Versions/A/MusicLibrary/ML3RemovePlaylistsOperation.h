@interface ML3RemovePlaylistsOperation : ML3DatabaseOperation

- (unsigned long long)type;
- (char)_removeSource:(int)a0 usingTransaction:(id)a1;
- (char)_execute:(id *)a0;
- (char)_removePlaylistsWithPersistentIDs:(id)a0 fromSource:(int)a1 usingTransaction:(id)a2;
- (char)_removeRemotePlaylistsWithNoSourceUsingTransation:(id)a0;
- (char)_verifyLibraryConnectionAndAttributesProperties:(id *)a0;

@end
