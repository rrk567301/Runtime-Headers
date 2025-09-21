@interface CoreKnowledge.CKSQLWriteBatch : CoreKnowledge.CKAbstractWriteBatch <CKKnowledgeStoreWriteBatch> {
    void /* unknown type, empty encoding */ queue;
}

- (char)writeAndReturnError:(id *)a0;
- (void)writeWithCompletionHandler:(id /* block */)a0;

@end
