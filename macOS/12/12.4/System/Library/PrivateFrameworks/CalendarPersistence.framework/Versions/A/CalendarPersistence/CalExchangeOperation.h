@class EWSExchangeServiceBinding;

@interface CalExchangeOperation : CalOperation

@property EWSExchangeServiceBinding *binding;

- (BOOL)executeInContext:(id)a0 error:(id *)a1;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;

@end
