@class _NSWorkspaceAuthorizationData;

@interface _NSAuthorizedFileManager : NSFileManager {
    _NSWorkspaceAuthorizationData *_auth;
}

- (void)dealloc;
- (char)createSymbolicLinkAtPath:(id)a0 withDestinationPath:(id)a1 error:(id *)a2;
- (char)setAttributes:(id)a0 ofItemAtPath:(id)a1 error:(id *)a2;
- (char)replaceItemAtURL:(id)a0 withItemAtURL:(id)a1 backupItemName:(id)a2 options:(unsigned long long)a3 resultingItemURL:(id *)a4 error:(id *)a5;
- (char)_handleLibSecInitStatus:(int)a0 xpcError:(id)a1 error:(id *)a2;
- (char)_withPartitionedAttributesFromDictionary:(id)a0 performBlock:(id /* block */)a1;
- (id)initWithAuthData:(id)a0;

@end
