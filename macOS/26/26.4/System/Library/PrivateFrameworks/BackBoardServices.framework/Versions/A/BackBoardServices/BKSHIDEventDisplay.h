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
+ (id)builtinDisplay;
+ (id)nullDisplay;
+ (id)displayWithHardwareIdentifier:(id)a0;

- (id)initForProtobufDecoding;
- (id)_initWithHardwareIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isBuiltinDisplay;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_hardwareIdentifier;
- (id)init;
- (BOOL)_isNullDisplay;
- (id)initWithCoder:(id)a0;

@end
