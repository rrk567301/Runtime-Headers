@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying> {
    unsigned int _CAContextID;
    NSString *_stringIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)tokenForIdentifierOfCAContext:(unsigned int)a0;
+ (id)tokenForString:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_string;
- (id)_initWithIdentifier:(unsigned int)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (id)initForProtobufDecoding;
- (id)_initWithString:(id)a0;
- (BOOL)_isIdentifierOfCAContext;
- (unsigned int)_identifierOfCAContext;
- (BOOL)_isString;

@end
