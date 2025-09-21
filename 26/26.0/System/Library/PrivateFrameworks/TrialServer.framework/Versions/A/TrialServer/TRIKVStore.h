@class TRIDatabase;

@interface TRIKVStore : NSObject {
    TRIDatabase *_db;
}

- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (id)initWithDatabase:(id)a0;
- (id)blobForKey:(id)a0 usingTransaction:(id)a1;
- (void)removeBlobForKey:(id)a0 usingTransaction:(id)a1;
- (id)init;
- (void)setBlob:(id)a0 forKey:(id)a1 usingTransaction:(id)a2;
- (void).cxx_destruct;

@end
