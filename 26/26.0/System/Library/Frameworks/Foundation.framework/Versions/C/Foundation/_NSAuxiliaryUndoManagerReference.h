@class NSUndoManager, NSXPCListenerEndpoint;

@interface _NSAuxiliaryUndoManagerReference : NSObject <NSSecureCoding> {
    NSXPCListenerEndpoint *_endpoint;
    NSUndoManager *_inProcessManager;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_endpoint;
- (id)_inProcessManager;
- (id)_initWithEndpoint:(id)a0 manager:(id)a1;

@end
