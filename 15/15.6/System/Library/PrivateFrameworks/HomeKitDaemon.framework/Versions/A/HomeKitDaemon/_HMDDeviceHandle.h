@class NSUUID, NSString, HMDAccountHandle;

@interface _HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) NSUUID *identifierNamespace;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic, getter=isLocal) char local;
@property (readonly, nonatomic, getter=isGlobal) char global;
@property (readonly, copy, nonatomic) HMDAccountHandle *accountHandle;
@property (readonly, copy, nonatomic) NSString *destination;

+ (char)isValidDestination:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithDestination:(id)a0;

@end
