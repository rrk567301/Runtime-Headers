@class NSString;

@interface BKSHIDEventDeferringSelectionPathIdentifier : NSObject <BSDescriptionStreaming, NSSecureCoding, BSProtobufSerializable, NSCopying, BKSHIDEventDeferringSelectionPathSymbol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)primary;
+ (id)everySelectionPath;
+ (id)genericGesture;

- (void)appendDescriptionToStream:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (id)_substituteSingeltonForIdentifierString:(id)a0;

@end
