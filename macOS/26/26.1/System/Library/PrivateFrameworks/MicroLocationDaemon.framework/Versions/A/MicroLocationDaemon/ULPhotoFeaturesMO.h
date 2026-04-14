@class NSData, ULScanningEventMO;

@interface ULPhotoFeaturesMO : NSManagedObject

@property (retain, nonatomic) NSData *features;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) ULScanningEventMO *scanningEvent;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 withScanningEventMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULPhotoFeaturesDO> { union { char x0; struct ULPhotoFeaturesDO { struct vector<float, std::allocator<float>> { float *x0; float *x1; float *x2; } x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; } x1; } x0; BOOL x1; })convertToDO;

@end
