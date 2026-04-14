@class LAContext;

@interface LACSContext : NSObject

@property (readonly, nonatomic) LAContext *context;

- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContextRef:(id)a0;
- (id)externalize;
- (id)fetchCredentialData:(id *)a0;
- (id)fetchCredentialUUID:(id *)a0;
- (BOOL)storeCredentialData:(id)a0 securely:(BOOL)a1 error:(id *)a2;
- (BOOL)storeCredentialUUID:(id)a0 error:(id *)a1;

@end
