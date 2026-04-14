@class NSString;

@interface ULLabelKey : NSObject <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long contextLayer;
@property (retain, nonatomic) NSString *mapItemType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 contextLayer:(unsigned long long)a1 mapItemType:(id)a2;

@end
