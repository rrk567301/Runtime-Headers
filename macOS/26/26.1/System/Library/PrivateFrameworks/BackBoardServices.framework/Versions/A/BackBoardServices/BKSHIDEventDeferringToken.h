@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)new;
+ (id)tokenForIdentifierOfCGSWindow:(unsigned int)a0;
+ (id)tokenForString:(id)a0;
+ (id)tokenForIdentifierOfCGSConnection:(unsigned int)a0;
+ (id)tokenForIdentifierOfCAContext:(unsigned int)a0;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)_string;
- (unsigned int)_identifierOfCGSConnection;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (unsigned int)_identifierOfCGSWindow;
- (id)initWithCoder:(id)a0;
- (BOOL)_isIdentifierOfCAContext;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isIdentifierOfCGSConnection;
- (unsigned int)_identifierOfCAContext;
- (BOOL)_isIdentifierOfCGSWindow;
- (id)init;
- (BOOL)_isString;

@end
