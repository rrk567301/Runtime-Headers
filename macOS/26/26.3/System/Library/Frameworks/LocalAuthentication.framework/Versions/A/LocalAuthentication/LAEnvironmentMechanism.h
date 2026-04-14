@class NSString, LACEnvironmentMechanism;

@interface LAEnvironmentMechanism : NSObject

@property (readonly, nonatomic) LACEnvironmentMechanism *coreMechanism;
@property (readonly, nonatomic) BOOL isUsable;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *iconSystemName;

- (id)description;
- (void).cxx_destruct;
- (id)availabilityError;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoreMechanism:(id)a0;

@end
