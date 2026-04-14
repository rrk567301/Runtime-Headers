@class NSData;

@interface AWDLServiceDiscoveryConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) NSData *serviceKey;
@property (readonly, nonatomic) NSData *serviceValue;
@property (readonly, nonatomic) BOOL browse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceKey:(id)a0 serviceValue:(id)a1 browse:(BOOL)a2;
- (id)initWithServiceKeyBytes:(const char *)a0 serviceKeyLength:(unsigned short)a1;
- (id)initWithServiceKeyBytes:(const char *)a0 serviceKeyLength:(unsigned short)a1 serviceValueBytes:(const char *)a2 serviceValueLength:(unsigned short)a3;

@end
