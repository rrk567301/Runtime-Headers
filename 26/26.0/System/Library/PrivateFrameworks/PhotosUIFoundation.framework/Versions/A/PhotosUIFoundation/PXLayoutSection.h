@class NSArray, NSMutableDictionary;

@interface PXLayoutSection : NSObject {
    NSMutableDictionary *_geometriesByKind;
}

@property (nonatomic) unsigned long long identifier;
@property (nonatomic, getter=isAccurate) BOOL accurate;
@property (nonatomic) long long index;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) NSArray *geometryKinds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)enumerateGeometriesWithBlock:(id /* block */)a0;
- (id)geometriesWithKind:(long long)a0;
- (void)setGeometries:(id)a0 withKind:(long long)a1;

@end
