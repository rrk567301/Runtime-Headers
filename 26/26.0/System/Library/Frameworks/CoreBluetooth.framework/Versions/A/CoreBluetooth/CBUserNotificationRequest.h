@class CBDevice;

@interface CBUserNotificationRequest : NSObject <CUXPCCodable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int event;
@property (retain, nonatomic) CBDevice *device;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
