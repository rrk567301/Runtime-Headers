@class NSString;

@interface _NSCollectionLayoutAuxiliaryKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *elementKind;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long auxiliaryKind;
@property (readonly, nonatomic) BOOL isSupplementary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithElementKind:(id)a0 index:(long long)a1 auxiliaryKind:(long long)a2 isSupplementary:(BOOL)a3;

@end
