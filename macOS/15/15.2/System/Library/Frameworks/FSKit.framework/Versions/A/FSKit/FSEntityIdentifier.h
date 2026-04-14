@class NSData, NSUUID;

@interface FSEntityIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *uuidData;
@property (copy) NSUUID *uuid;
@property (copy) NSData *qualifier;

+ (id)identifier;
+ (id)defaultInstanceUUID;
+ (id)identifierWithUUID:(id)a0;
+ (id)identifierWithUUID:(id)a0 byteQualifier:(const char *)a1;
+ (id)identifierWithUUID:(id)a0 data:(id)a1;
+ (id)identifierWithUUID:(id)a0 longByteQualifier:(const char *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithBytes:(const char *)a0 length:(int)a1;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0;
- (id)initWithUUID:(id)a0 data:(id)a1;
- (id)initWithUUID:(id)a0 longByteQualifier:(const char *)a1;
- (id)initWithCopiedUUID:(id)a0 data:(id)a1;
- (id)initWithUUID:(id)a0 byteQualifier:(const char *)a1;

@end
