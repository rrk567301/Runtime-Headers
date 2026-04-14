@class RTMapItem;

@interface RTPinnedPlace : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) RTMapItem *mapItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithType:(unsigned long long)a0 mapItem:(id)a1;

@end
