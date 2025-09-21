@class NSData, ULLoiMO;

@interface ULAnchorAppearanceMapMO : NSManagedObject

@property (retain, nonatomic) NSData *anchorAppearance;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) ULLoiMO *loi;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 withLoiMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULAnchorAppearanceMapDO> { union { char x0; struct ULAnchorAppearanceMapDO { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; struct uuid { unsigned char x0[16]; } x1; struct AnchorAppearanceConfiguration { void /* function */ **x0; struct anchorAppearancesVector *x1; int x2; int x3; unsigned int x4[1]; } x2; } x1; } x0; BOOL x1; })convertToDO;

@end
