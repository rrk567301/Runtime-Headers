@class RTMapItem;

@interface RTPinnedPlace : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) RTMapItem *mapItem;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)a0 mapItem:(id)a1;

@end
