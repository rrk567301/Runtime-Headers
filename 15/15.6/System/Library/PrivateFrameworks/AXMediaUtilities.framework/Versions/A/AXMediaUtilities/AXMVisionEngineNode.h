@class NSString, NSObject;
@protocol OS_dispatch_queue, AXMVisionEngineNodeConnectionDelegate;

@interface AXMVisionEngineNode : NSObject <NSSecureCoding, AXMDescribing>

@property (class, readonly, nonatomic) char isSupported;
@property (class, readonly, nonatomic) NSString *title;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isConnected) char connected;
@property (weak, nonatomic) id<AXMVisionEngineNodeConnectionDelegate> delegate;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nodeQueue;
@property (readonly, nonatomic) char areDiagnosticsEnabled;
@property (readonly, nonatomic) char requiresVisionFramework;
@property (nonatomic, getter=isEnabled) char enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)disconnect;
- (void)connect:(id)a0;
- (void)freeResources;
- (void)axmAppendRecursiveDescription:(id)a0 withIndentation:(long long)a1;
- (id)axmDescription;
- (void)nodeInitialize;
- (char)validateVisionKitSoftLinkSymbols;

@end
