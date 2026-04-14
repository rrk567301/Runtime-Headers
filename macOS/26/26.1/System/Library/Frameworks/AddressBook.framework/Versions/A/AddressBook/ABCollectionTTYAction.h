@protocol ABRTTServices;

@interface ABCollectionTTYAction : ABCollectionAbstractAction

@property (readonly, nonatomic) id<ABRTTServices> ttyServices;

- (void).cxx_destruct;
- (id)init;
- (id)contactInCollectionViewItem:(id)a0;
- (void)executeWithTarget:(id)a0;
- (id)initWithTTYServices:(id)a0;
- (BOOL)validateWithTarget:(id)a0;

@end
