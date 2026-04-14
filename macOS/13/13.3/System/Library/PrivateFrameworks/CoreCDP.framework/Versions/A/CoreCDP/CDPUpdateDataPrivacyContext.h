@class NSArray;

@interface CDPUpdateDataPrivacyContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long statusToSet;
@property (nonatomic) BOOL userAcceptedDevicesToLoseAccountAccess;
@property (retain, nonatomic) NSArray *devicesThatLoseAccountAccessOnEnable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatusToUpdate:(unsigned long long)a0;

@end
