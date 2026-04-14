@class PCSCKKSItemModifyContext;

@interface PCSCKKSFetchCurrentOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context;

- (void)start;
- (void).cxx_destruct;
- (void)fetchComplete:(id)a0 currentItemData:(id)a1 point:(id)a2 error:(id)a3;
- (void)fetchCurrentItem:(id)a0 viewhint:(id)a1 complete:(id /* block */)a2;
- (void)fetchPersistentRef:(id)a0 persistentRef:(id)a1;
- (id)initWithItemModifyContext:(id)a0;

@end
