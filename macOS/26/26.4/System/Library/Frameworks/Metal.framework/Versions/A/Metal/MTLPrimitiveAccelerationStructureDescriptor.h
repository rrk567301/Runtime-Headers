@class NSArray;

@interface MTLPrimitiveAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor

@property (retain, nonatomic) NSArray *geometryDescriptors;
@property (nonatomic) unsigned int motionStartBorderMode;
@property (nonatomic) unsigned int motionEndBorderMode;
@property (nonatomic) float motionStartTime;
@property (nonatomic) float motionEndTime;
@property (nonatomic) unsigned long long motionKeyframeCount;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)type;
- (id)init;
- (void)dealloc;

@end
