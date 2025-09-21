@class NSString;

@interface BKSHIDEventDisplay : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying> {
    char _builtin;
    NSString *_hardwareIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)builtinDisplay;
+ (id)displayWithHardwareIdentifier:(id)a0;
+ (id)nullDisplay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForProtobufDecoding;
- (id)_hardwareIdentifier;
- (id)_initWithHardwareIdentifier:(id)a0;
- (char)_isBuiltinDisplay;
- (char)_isNullDisplay;

@end
