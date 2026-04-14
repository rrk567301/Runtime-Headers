@class NSString, LACEnvironmentMechanism;

@interface LAEnvironmentMechanism : NSObject

@property (readonly, nonatomic) LACEnvironmentMechanism *coreMechanism;
@property (readonly, nonatomic) BOOL isUsable;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *iconSystemName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)availabilityError;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoreMechanism:(id)a0;

@end
