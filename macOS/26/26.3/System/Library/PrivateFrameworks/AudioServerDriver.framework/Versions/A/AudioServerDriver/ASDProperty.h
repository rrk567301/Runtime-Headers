@class ASDPropertyAddress;

@interface ASDProperty : NSObject <NSCopying>

@property (readonly, nonatomic) ASDPropertyAddress *address;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAddress:(id)a0 value:(id)a1;

@end
