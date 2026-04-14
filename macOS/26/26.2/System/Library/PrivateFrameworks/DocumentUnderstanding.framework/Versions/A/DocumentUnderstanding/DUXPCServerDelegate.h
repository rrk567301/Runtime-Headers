@class NSString, _TtC21DocumentUnderstanding24TextUnderstandingManager;

@interface DUXPCServerDelegate : NSObject <NSXPCListenerDelegate> {
    _TtC21DocumentUnderstanding24TextUnderstandingManager *_textUnderstandingManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;

@end
