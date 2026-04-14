@class NSString, NSSet;

@interface SPOwnerSessionState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *serviceState;
@property (retain, nonatomic) NSSet *disabledReasons;
@property (retain, nonatomic) NSString *ownerDataState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceState:(id)a0 disabledReasons:(id)a1 ownerDataState:(id)a2;

@end
