@class NSArray, NSString;

@interface STMutableListData : STListData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (copy, nonatomic) NSArray *objects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)setObjects:(id)a0;
- (char)applyDiff:(id)a0;
- (void)removeAllOccurrencesOfObject:(id)a0;

@end
