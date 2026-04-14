@interface NSViewLayoutRegion : NSObject {
    long long _area;
    long long _axis;
}

@property (readonly, nonatomic) long long _area;
@property (readonly, nonatomic) long long _adaptivityAxis;

+ (id)marginsLayoutRegionWithCornerAdaptation:(long long)a0;
+ (id)safeAreaLayoutRegionWithCornerAdaptation:(long long)a0;

- (id)initWithArea:(long long)a0 withAdaptivityAxis:(long long)a1;

@end
