@class NSString;

@interface STMutablePlaygroundsStatusDomainData : STPlaygroundsStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (nonatomic, getter=isPlaygroundsActive) char playgroundsActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)applyDiff:(id)a0;
- (void)setPlaygroundsActive:(char)a0;

@end
