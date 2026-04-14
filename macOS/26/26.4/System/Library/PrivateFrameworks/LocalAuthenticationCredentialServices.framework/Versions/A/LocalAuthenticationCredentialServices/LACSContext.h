@class NSString, LAContext;

@interface LACSContext : NSObject <LACSContext>

@property (readonly, nonatomic) LAContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContextRef:(id)a0;
- (id)externalize;
- (id)fetchCredentialData:(id *)a0;
- (BOOL)storeCredentialData:(id)a0 securely:(BOOL)a1 error:(id *)a2;

@end
