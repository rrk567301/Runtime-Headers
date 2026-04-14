@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)tokenForString:(id)a0;
+ (id)protobufSchema;
+ (id)tokenForIdentifierOfCGSConnection:(unsigned int)a0;
+ (id)tokenForIdentifierOfCAContext:(unsigned int)a0;
+ (id)tokenForIdentifierOfCGSWindow:(unsigned int)a0;

- (id)_init;
- (BOOL)_isString;
- (id)_string;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isIdentifierOfCAContext;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)_identifierOfCGSWindow;
- (unsigned int)_identifierOfCAContext;
- (id)init;
- (unsigned int)_identifierOfCGSConnection;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)_isIdentifierOfCGSConnection;
- (BOOL)_isIdentifierOfCGSWindow;

@end
