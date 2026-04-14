@class NSString, CXHandle, NSData;

@interface CXMember : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *stableDeviceIdentifier;
@property (readonly, copy, nonatomic) CXHandle *handle;
@property (readonly, copy, nonatomic) NSData *identityBlob;

- (id)initWithHandle:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToMember:(id)a0;
- (id)initWithHandle:(id)a0 identityBlob:(id)a1;
- (id)initWithHandle:(id)a0 identityBlob:(id)a1 stableDeviceIdentifier:(id)a2;

@end
