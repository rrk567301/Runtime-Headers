@class AuRA_SimulatedIOController;
@protocol AuRA_IOController;

@interface AuRA_SimulatedConfigurationChangeIOController : NSObject <NSCopying>

@property (retain, nonatomic) id<AuRA_IOController> ioController;
@property (retain, nonatomic) AuRA_SimulatedIOController *simulatedIOController;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
