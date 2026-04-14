@class ASDPropertyAddress;

@interface ASDProperty : NSObject <NSCopying>

@property (readonly, nonatomic) ASDPropertyAddress *address;
@property (retain, nonatomic) id value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAddress:(id)a0 value:(id)a1;

@end
