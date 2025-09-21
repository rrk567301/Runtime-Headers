@class NSString, NSXPCListenerEndpoint;

@interface WFShowActionInterfaceDialogResponse : WFDialogResponse <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly, nonatomic, getter=isUnsupported) char unsupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCancelled:(char)a0;
- (char)shouldDismissDialogInTransientMode;
- (id)initWithUnsupported:(char)a0;
- (id)initWithListenerEndpoint:(id)a0 userInterfaceType:(id)a1;

@end
