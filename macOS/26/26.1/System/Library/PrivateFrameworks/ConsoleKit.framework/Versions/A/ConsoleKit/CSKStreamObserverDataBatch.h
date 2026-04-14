@interface CSKStreamObserverDataBatch : CSKStreamDataBatch <NSCopying>

@property (nonatomic) unsigned long long direction;
@property (nonatomic) long long anchorClosestIndex;
@property (nonatomic) BOOL anchorClosestIndexIsAnchor;

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToObserverDataBatch:(id)a0;

@end
