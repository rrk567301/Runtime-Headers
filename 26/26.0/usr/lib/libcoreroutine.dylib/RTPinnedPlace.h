@class RTMapItem;

@interface RTPinnedPlace : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) RTMapItem *mapItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 mapItem:(id)a1;

@end
