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
+ (id)systemEnvironment;
+ (id)environmentWithIdentifier:(id)a0;
+ (id)keyboardFocusEnvironment;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (BOOL)_isKeyboardFocusEnvironment;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initForProtobufDecoding;
- (BOOL)_isSystemEnvironment;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
