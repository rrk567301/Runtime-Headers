@class NSString;

@interface ULLabelKey : NSObject <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long contextLayer;
@property (retain, nonatomic) NSString *mapItemType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 contextLayer:(unsigned long long)a1 mapItemType:(id)a2;

@end
