@interface CSKStreamObserverDataBatch : CSKStreamDataBatch <NSCopying>

@property (nonatomic) unsigned long long direction;
@property (nonatomic) long long anchorClosestIndex;
@property (nonatomic) BOOL anchorClosestIndexIsAnchor;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (BOOL)isEqualToObserverDataBatch:(id)a0;

@end
