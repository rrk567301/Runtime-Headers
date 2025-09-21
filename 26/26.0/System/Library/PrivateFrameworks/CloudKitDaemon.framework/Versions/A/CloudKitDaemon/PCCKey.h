@interface PCCKey : NSObject

@property struct pcc_invocation_key { unsigned char x0[32]; } *secret;

- (void)clear;
- (void)dealloc;
- (id)init;
- (id)decrypt:(id)a0;
- (id)encrypt:(id)a0;

@end
