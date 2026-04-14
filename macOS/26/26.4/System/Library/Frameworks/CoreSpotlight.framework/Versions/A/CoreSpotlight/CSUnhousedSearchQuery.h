@class NSString, CSSearchConnection;

@interface CSUnhousedSearchQuery : CSSearchQuery {
    NSString *_resolvedIndexPath;
}

@property (retain) NSString *indexPath;
@property (readonly) NSString *resolvedIndexPath;
@property (retain) CSSearchConnection *savedConnection;

- (id)connection;
- (id)initialConnection;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 queryString:(id)a1 context:(id)a2 attributes:(id)a3;
- (id)initWithPath:(id)a0 queryString:(id)a1 context:(id)a2;
- (void)start;
- (id)debugDescriptionWithQueryString:(BOOL)a0;
- (id)initWithPath:(id)a0 queryString:(id)a1 attributers:(id)a2;

@end
