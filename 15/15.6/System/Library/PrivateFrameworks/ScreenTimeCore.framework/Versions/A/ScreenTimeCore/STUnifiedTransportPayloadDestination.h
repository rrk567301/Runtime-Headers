@class NSString;

@interface STUnifiedTransportPayloadDestination : NSObject <NSCopying, NSSecureCoding, STSerializableManagedObject>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDSID:(id)a0;
- (id)initWithAddress:(id)a0 type:(id)a1;
- (id)initWithAddress:(id)a0 type:(id)a1 state:(unsigned long long)a2;
- (char)updateWithDictionaryRepresentation:(id)a0;

@end
