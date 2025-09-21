@class NSNumber;

@interface MTROTASoftwareUpdateRequestorClusterVersionAppliedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSNumber *productID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
