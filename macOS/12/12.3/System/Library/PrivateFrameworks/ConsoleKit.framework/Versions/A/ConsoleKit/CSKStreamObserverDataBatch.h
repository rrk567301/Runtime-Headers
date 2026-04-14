@interface CSKStreamObserverDataBatch : CSKStreamDataBatch <NSCopying>

@property (nonatomic) unsigned long long direction;
@property (nonatomic) long long anchorClosestIndex;
@property (nonatomic) BOOL anchorClosestIndexIsAnchor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)init;
- (BOOL)isEqualToObserverDataBatch:(id)a0;

@end
