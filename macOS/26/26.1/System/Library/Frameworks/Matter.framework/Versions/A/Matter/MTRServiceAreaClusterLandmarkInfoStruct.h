@class NSNumber;

@interface MTRServiceAreaClusterLandmarkInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *landmarkTag;
@property (copy, nonatomic) NSNumber *relativePositionTag;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
