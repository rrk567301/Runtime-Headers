@interface MiroPhotoFreezeInfo : MiroFreezeInfo

@property (nonatomic) BOOL added;
@property (nonatomic) BOOL removed;
@property (nonatomic) BOOL used;
@property (nonatomic) BOOL iris;
@property (nonatomic) double duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithData:(id)a0;
- (id)dataRepresentation;
- (BOOL)isRemoved;
- (BOOL)isAdded;
- (BOOL)isFreeze;

@end
