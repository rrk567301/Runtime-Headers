@class NSString;

@interface BKSHIDEventDeferringEnvironment : NSObject <BSProtobufSerializable, NSSecureCoding, NSCopying, BSXPCCoding, BSXPCSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)environmentWithIdentifier:(id)a0;
+ (id)keyboardFocusEnvironment;
+ (id)systemEnvironment;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initForProtobufDecoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isKeyboardFocusEnvironment;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)_isSystemEnvironment;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)a0;
- (id)init;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
