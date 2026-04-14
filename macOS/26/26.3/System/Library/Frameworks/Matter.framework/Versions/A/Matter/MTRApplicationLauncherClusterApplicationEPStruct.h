@class MTRApplicationLauncherClusterApplicationStruct, NSNumber;

@interface MTRApplicationLauncherClusterApplicationEPStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRApplicationLauncherClusterApplicationStruct *application;
@property (copy, nonatomic) NSNumber *endpoint;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
