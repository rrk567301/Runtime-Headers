@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenForIdentifierOfCGSConnection:(unsigned int)a0;
+ (id)new;
+ (id)tokenForIdentifierOfCAContext:(unsigned int)a0;
+ (id)protobufSchema;
+ (id)tokenForIdentifierOfCGSWindow:(unsigned int)a0;
+ (id)tokenForString:(id)a0;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isIdentifierOfCAContext;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isIdentifierOfCGSConnection;
- (id)init;
- (unsigned int)_identifierOfCGSConnection;
- (id)_string;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)_isIdentifierOfCGSWindow;
- (id)initWithCoder:(id)a0;
- (unsigned int)_identifierOfCGSWindow;
- (BOOL)_isString;
- (unsigned int)_identifierOfCAContext;

@end
