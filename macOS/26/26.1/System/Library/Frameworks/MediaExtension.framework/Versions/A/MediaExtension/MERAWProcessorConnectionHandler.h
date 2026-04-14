@class NSString, NSXPCConnection;
@protocol MERAWProcessorExtension;

@interface MERAWProcessorConnectionHandler : NSObject <_EXMainConnectionHandler, FigExtensionConnectionHandler>

@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<MERAWProcessorExtension> extensionFactory;
@property (readonly) id principalObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)dealloc;
- (id)principalObject;
- (void).cxx_destruct;
- (id)initWithPrincipalObject:(id)a0;
- (void)startConnectionWithOptions:(id)a0;

@end
