@interface MusicUI.CompositionalLayout : NSCollectionViewCompositionalLayout {
    void /* unknown type, empty encoding */ environment;
}

@property (nonatomic, readonly) BOOL _isSingleColumnOrRow;

- (id)initWithSectionProvider:(id /* block */)a0;
- (id)initWithSectionProvider:(id /* block */)a0 configuration:(id)a1;
- (id)initWithSection:(id)a0 configuration:(id)a1;
- (id)initWithSection:(id)a0;
- (void)finalizeCollectionViewUpdates;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
