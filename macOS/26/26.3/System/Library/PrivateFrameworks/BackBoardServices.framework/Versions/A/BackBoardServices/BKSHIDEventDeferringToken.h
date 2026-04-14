@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)tokenForString:(id)a0;
+ (id)tokenForIdentifierOfCGSConnection:(unsigned int)a0;
+ (id)tokenForIdentifierOfCGSWindow:(unsigned int)a0;
+ (id)protobufSchema;
+ (id)tokenForIdentifierOfCAContext:(unsigned int)a0;

- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)_isIdentifierOfCAContext;
- (unsigned int)_identifierOfCAContext;
- (id)init;
- (id)_init;
- (unsigned int)_identifierOfCGSConnection;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_string;
- (BOOL)_isString;
- (BOOL)_isIdentifierOfCGSWindow;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)_identifierOfCGSWindow;
- (BOOL)_isIdentifierOfCGSConnection;

@end
