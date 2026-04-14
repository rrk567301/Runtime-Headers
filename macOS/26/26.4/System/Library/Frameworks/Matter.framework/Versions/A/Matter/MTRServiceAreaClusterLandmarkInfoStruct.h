@class NSNumber;

@interface MTRServiceAreaClusterLandmarkInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *landmarkTag;
@property (copy, nonatomic) NSNumber *relativePositionTag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
