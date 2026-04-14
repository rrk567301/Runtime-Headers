@class NSString, CSSearchConnection;

@interface CSUnhousedSearchQuery : CSSearchQuery {
    NSString *_resolvedIndexPath;
}

@property (retain) NSString *indexPath;
@property (readonly) NSString *resolvedIndexPath;
@property (retain) CSSearchConnection *savedConnection;

- (id)initialConnection;
- (id)initWithPath:(id)a0 queryString:(id)a1 context:(id)a2 attributes:(id)a3;
- (id)debugDescriptionWithQueryString:(BOOL)a0;
- (void)start;
- (id)initWithPath:(id)a0 queryString:(id)a1 attributers:(id)a2;
- (id)connection;
- (id)initWithPath:(id)a0 queryString:(id)a1 context:(id)a2;
- (void).cxx_destruct;

@end
