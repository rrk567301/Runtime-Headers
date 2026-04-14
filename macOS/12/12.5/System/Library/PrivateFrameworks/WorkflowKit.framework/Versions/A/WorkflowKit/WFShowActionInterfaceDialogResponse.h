@class NSString, NSXPCListenerEndpoint;

@interface WFShowActionInterfaceDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly, nonatomic, getter=isUnsupported) BOOL unsupported;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldDismissDialogInTransientMode;
- (id)initWithCancelled:(BOOL)a0;
- (id)initWithUnsupported:(BOOL)a0;
- (id)initWithListenerEndpoint:(id)a0 userInterfaceType:(id)a1;

@end
