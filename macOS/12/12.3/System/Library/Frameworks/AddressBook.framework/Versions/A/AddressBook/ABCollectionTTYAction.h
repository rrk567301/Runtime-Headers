@protocol ABRTTServices;

@interface ABCollectionTTYAction : ABCollectionAbstractAction

@property (readonly, nonatomic) id<ABRTTServices> ttyServices;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateWithTarget:(id)a0;
- (void)executeWithTarget:(id)a0;
- (id)initWithTTYServices:(id)a0;
- (id)contactInCollectionViewItem:(id)a0;

@end
