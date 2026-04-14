@class NSString, NSXPCConnection;

@interface EXSEWSSearchDirectoryRequest : NSObject

@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) BOOL includeFullData;
@property (readonly, weak, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)initWithRequestID:(id)a0 searchQuery:(id)a1 includeFullData:(BOOL)a2 connection:(id)a3;

@end
