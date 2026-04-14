@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSXPCInterface;

@interface NSVBHasClientAuxiliaryConnection : NSObject <HasAuxiliaryConnection> {
    NSXPCListenerEndpoint *_auxiliaryListenerEndpoint;
}

@property (readonly) id auxiliarySyncObject;
@property (readonly, nonatomic) NSXPCInterface *auxiliaryInterfaceOutgoing;
@property (readonly, nonatomic) NSXPCInterface *auxiliaryInterfaceIncoming;
@property (nonatomic) NSXPCConnection *auxiliaryServiceConnection;
@property (readonly) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
