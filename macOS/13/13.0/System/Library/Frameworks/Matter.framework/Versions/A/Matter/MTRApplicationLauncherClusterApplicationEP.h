@class NSNumber, MTRApplicationLauncherClusterApplication;

@interface MTRApplicationLauncherClusterApplicationEP : NSObject <NSCopying>

@property (copy, nonatomic) MTRApplicationLauncherClusterApplication *application;
@property (copy, nonatomic) NSNumber *endpoint;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
