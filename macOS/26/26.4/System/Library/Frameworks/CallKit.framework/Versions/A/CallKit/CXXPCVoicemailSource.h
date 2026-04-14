@class NSString, NSXPCConnection, NSURL, NSSet;

@interface CXXPCVoicemailSource : CXVoicemailSource

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;

- (id)vendorProtocolDelegate;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isConnected;
- (id)initWithConnection:(id)a0;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;
- (void)dealloc;

@end
