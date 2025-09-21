@class NSXPCListenerEndpoint;

@interface _EXSinkLoadOperator : _EXLoadOperator <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSXPCListenerEndpoint *endpoint;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)loadItemForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1 expectedValueClass:(Class)a2 options:(id)a3;
- (void)loadPreviewImageWithCompletionHandler:(id /* block */)a0 expectedValueClass:(Class)a1 options:(id)a2;

@end
