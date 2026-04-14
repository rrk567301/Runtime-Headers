@class NSMutableData;

@interface STRootStorage : STStorage {
    struct _RootStorage { } *m_pCRoot;
    NSMutableData *m_StorageData;
    void *m_pvBuf;
}

- (void)dealloc;
- (id)initWithName:(id)a0 andMode:(int)a1;
- (id)initWithMutableData:(id)a0 andMode:(int)a1;
- (void *)resizeStorageBuffer:(unsigned long long)a0;
- (id)getDocumentProperty:(int)a0 withId:(int)a1 PropType:(int *)a2;
- (id)getDocumentProperty:(int)a0 withId:(int)a1 PropType:(int *)a2 throwOnError:(BOOL)a3;
- (id)getStringDocumentPropertyWithId:(int)a0 givenPropStream:(int)a1;
- (int)getLongDocumentPropertyWithId:(int)a0 givenPropStream:(int)a1;
- (short)getShortDocumentPropertyWithId:(int)a0 givenPropStream:(int)a1;
- (void)setDocumentProperty:(int)a0 withId:(int)a1 AndType:(int)a2 AndValue:(void *)a3;
- (void)setStringDocumentPropertyWithId:(int)a0 to:(id)a1 givenPropStream:(int)a2;
- (void)setLongDocumentPropertyWithId:(int)a0 to:(int)a1 givenPropStream:(int)a2;
- (void)setShortDocumentPropertyWithId:(int)a0 to:(short)a1 givenPropStream:(int)a2;
- (void)setBlobDocumentPropertyWithId:(int)a0 to:(void *)a1 givenPropStream:(int)a2;
- (void)setDefaultDocumentProperties;

@end
