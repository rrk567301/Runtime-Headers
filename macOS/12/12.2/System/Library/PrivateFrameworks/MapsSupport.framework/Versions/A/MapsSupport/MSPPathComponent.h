@class NSUUID;

@interface MSPPathComponent : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *originIdentifier;
@property (readonly, nonatomic) unsigned short index;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithIndex:(unsigned short)a0 originIdentifier:(id)a1;

@end
