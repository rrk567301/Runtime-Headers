@class NSUUID, NSString;

@interface COHomeKitAccessoryMemento : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *categoryType;
@property (readonly, nonatomic) NSUUID *homeUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *IDSIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHomeKitAccessory:(id)a0;
- (char)isEqualToHomeKitAccessoryMemento:(id)a0;

@end
