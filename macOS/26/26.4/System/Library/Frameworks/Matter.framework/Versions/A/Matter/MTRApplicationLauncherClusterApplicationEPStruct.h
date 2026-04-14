@class MTRApplicationLauncherClusterApplicationStruct, NSNumber;

@interface MTRApplicationLauncherClusterApplicationEPStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRApplicationLauncherClusterApplicationStruct *application;
@property (copy, nonatomic) NSNumber *endpoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
