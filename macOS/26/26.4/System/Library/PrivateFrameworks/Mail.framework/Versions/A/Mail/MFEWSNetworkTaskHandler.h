@class MFEWSConnection;

@interface MFEWSNetworkTaskHandler : MCTaskHandler

@property (readonly, nonatomic) MFEWSConnection *connection;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEWSConnection:(id)a0;

@end
