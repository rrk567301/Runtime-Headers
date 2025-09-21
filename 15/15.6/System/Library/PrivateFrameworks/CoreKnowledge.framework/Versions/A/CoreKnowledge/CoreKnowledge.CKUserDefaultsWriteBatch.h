@interface CoreKnowledge.CKUserDefaultsWriteBatch : CoreKnowledge.CKAbstractWriteBatch <CKKnowledgeStoreWriteBatch>

- (char)writeAndReturnError:(id *)a0;
- (void)writeWithCompletionHandler:(id /* block */)a0;

@end
