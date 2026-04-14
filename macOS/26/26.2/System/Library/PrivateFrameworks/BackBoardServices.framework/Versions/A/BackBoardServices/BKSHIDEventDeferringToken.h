@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)protobufSchema;
+ (id)tokenForIdentifierOfCGSConnection:(unsigned int)a0;
+ (id)tokenForString:(id)a0;
+ (id)tokenForIdentifierOfCGSWindow:(unsigned int)a0;
+ (id)tokenForIdentifierOfCAContext:(unsigned int)a0;

- (unsigned int)_identifierOfCGSConnection;
- (void)appendDescriptionToFormatter:(id)a0;
- (unsigned int)_identifierOfCAContext;
- (id)initWithCoder:(id)a0;
- (BOOL)_isIdentifierOfCGSConnection;
- (BOOL)_isIdentifierOfCGSWindow;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)_identifierOfCGSWindow;
- (id)_init;
- (id)_string;
- (BOOL)_isIdentifierOfCAContext;
- (BOOL)_isString;
- (id)init;

@end
