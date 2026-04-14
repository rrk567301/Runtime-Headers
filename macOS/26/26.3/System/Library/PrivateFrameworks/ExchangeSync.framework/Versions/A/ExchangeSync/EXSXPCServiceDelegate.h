@class EXSSyncEngine, NSString;

@interface EXSXPCServiceDelegate : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) EXSSyncEngine *syncEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithSyncEngine:(id)a0;

@end
