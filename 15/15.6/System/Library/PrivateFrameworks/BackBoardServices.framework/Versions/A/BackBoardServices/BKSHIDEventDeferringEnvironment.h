@class NSString;

@interface BKSHIDEventDeferringEnvironment : NSObject <BSProtobufSerializable, NSSecureCoding, NSCopying, BSXPCCoding, BSXPCSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (char)supportsBSXPCSecureCoding;
+ (id)environmentWithIdentifier:(id)a0;
+ (id)keyboardFocusEnvironment;
+ (id)systemEnvironment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initForProtobufDecoding;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (char)_isKeyboardFocusEnvironment;
- (char)_isSystemEnvironment;

@end
