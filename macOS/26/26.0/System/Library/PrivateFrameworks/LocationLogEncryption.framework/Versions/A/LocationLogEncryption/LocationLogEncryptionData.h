@interface LocationLogEncryptionData : NSObject

@property (readonly) int size;
@property (readonly) void *data;

+ (id)encryptionDataWithCLClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; })a0;
+ (id)encryptionDataWithCLLocation:(id)a0;
+ (id)encryptionDataWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)encryptionDataWithLatitude:(double)a0 andLongitude:(double)a1;

- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)dealloc;
- (id)initWithCLLocation:(id)a0;
- (id)initWithCLClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; })a0;
- (id)initWithLatitude:(double)a0 andLongitude:(double)a1;

@end
