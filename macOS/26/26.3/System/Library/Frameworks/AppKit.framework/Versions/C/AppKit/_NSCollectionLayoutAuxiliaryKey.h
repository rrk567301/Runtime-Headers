@class NSString;

@interface _NSCollectionLayoutAuxiliaryKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *elementKind;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long auxiliaryKind;
@property (readonly, nonatomic) BOOL isSupplementary;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithElementKind:(id)a0 index:(long long)a1 auxiliaryKind:(long long)a2 isSupplementary:(BOOL)a3;

@end
