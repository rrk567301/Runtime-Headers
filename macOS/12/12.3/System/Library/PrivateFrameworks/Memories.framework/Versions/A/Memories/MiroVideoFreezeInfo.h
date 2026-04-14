@class NSArray;

@interface MiroVideoFreezeInfo : MiroFreezeInfo

@property (retain, nonatomic) NSArray *ranges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)token;
- (BOOL)isRemoved;
- (BOOL)isAdded;
- (BOOL)isFreeze;

@end
