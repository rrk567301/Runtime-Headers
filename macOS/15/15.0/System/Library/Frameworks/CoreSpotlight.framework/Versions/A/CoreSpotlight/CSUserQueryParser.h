@interface CSUserQueryParser : NSObject

- (id)_CSQueryCreateQueryDictionaryWithOptionsDict:(id)a0 attribute:(id)a1 input:(id)a2 options:(unsigned int)a3;
- (void)_CSUserQueryCancelQueryWithReferenceDict:(id)a0;
- (void)_CSUserQueryCooldown;
- (void)_CSUserQueryPreheat;

@end
