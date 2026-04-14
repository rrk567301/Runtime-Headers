@class NSString;

@interface BKSHIDEventDisplay : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying> {
    BOOL _builtin;
    NSString *_hardwareIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)displayWithHardwareIdentifier:(id)a0;
+ (id)protobufSchema;
+ (id)nullDisplay;
+ (id)builtinDisplay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isNullDisplay;
- (id)init;
- (BOOL)_isBuiltinDisplay;
- (id)_hardwareIdentifier;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (id)_initWithHardwareIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
