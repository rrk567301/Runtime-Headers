@class NSNumber;

@interface MTRServiceAreaClusterLandmarkInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *landmarkTag;
@property (copy, nonatomic) NSNumber *relativePositionTag;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
