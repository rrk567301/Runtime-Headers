@class NSString, SYDTestConfiguration, CKContainerID;

@interface SYDStoreID : NSObject <NSCopying, NSSecureCoding> {
    CKContainerID *_containerID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) SYDTestConfiguration *testConfiguration;
@property (copy, nonatomic) NSString *personaUniqueString;
@property (copy, nonatomic) CKContainerID *containerID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(long long)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
