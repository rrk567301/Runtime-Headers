@interface VSTVolumeDataCreateFromCapacityInfo : NSObject

@property (nonatomic) long long packingMethod;
@property (nonatomic) unsigned long long numSplats;
@property (nonatomic) unsigned long long shOrder;
@property (nonatomic) BOOL provideNormals;
@property (nonatomic) void /* unknown type, empty encoding */ boxMin;
@property (nonatomic) void /* unknown type, empty encoding */ boxMax;

- (id)init;

@end
