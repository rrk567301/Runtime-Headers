@interface ASDPropertyAddress : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int selector;
@property (readonly, nonatomic) unsigned int scope;
@property (readonly, nonatomic) unsigned int element;
@property (readonly, nonatomic) struct AudioObjectPropertyAddress { unsigned int mSelector; unsigned int mScope; unsigned int mElement; } audioObjectPropertyAddress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0;
- (id)initWithSelector:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2;

@end
