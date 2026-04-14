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

+ (id)protobufSchema;
+ (id)displayWithHardwareIdentifier:(id)a0;
+ (id)nullDisplay;
+ (id)builtinDisplay;

- (id)initWithCoder:(id)a0;
- (id)initForProtobufDecoding;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithHardwareIdentifier:(id)a0;
- (BOOL)_isBuiltinDisplay;
- (void).cxx_destruct;
- (id)_hardwareIdentifier;
- (id)init;
- (BOOL)_isNullDisplay;

@end
