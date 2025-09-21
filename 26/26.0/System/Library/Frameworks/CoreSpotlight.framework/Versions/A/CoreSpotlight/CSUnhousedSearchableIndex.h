@class NSString, CSIndexConnection;

@interface CSUnhousedSearchableIndex : CSSearchableIndex {
    NSString *_resolvedIndexPath;
}

@property BOOL attemptedIndexPathResolution;
@property (readonly, nonatomic) NSString *resolvedIndexPath;
@property (nonatomic) int resolvedIndexPathErrorCode;
@property (retain, nonatomic) NSString *indexPath;
@property (retain, nonatomic) CSIndexConnection *savedConnection;

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (id)initialConnection;
- (id)initWithPath:(id)a0 bundleId:(id)a1;
- (id)initWithName:(id)a0 protectionClass:(id)a1 path:(id)a2;
- (id)xpc_dictionary_for_command:(const char *)a0 requiresInitialization:(BOOL)a1;
- (id)addExtensionToken:(id)a0 indexPath:(const char *)a1 connection:(id)a2;
- (const char *)defaultIndexPath;
- (id)connection;
- (void).cxx_destruct;

@end
