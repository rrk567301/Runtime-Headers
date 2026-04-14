@interface EXSEWSUpdateTaskOperation : EXSEWSOperation

- (id)initWithProtocol:(id)a0;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;
- (id)_buildItemSettersForTaskChangeItem:(id)a0;

@end
