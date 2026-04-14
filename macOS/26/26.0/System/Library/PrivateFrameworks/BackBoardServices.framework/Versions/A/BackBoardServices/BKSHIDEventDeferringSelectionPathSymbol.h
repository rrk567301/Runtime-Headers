@class NSString;

@interface BKSHIDEventDeferringSelectionPathSymbol : NSObject <BKSHIDEventDeferringSelectionPathSymbol, NSCopying, NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;

@end
