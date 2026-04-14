@class NSString;

@interface _BKSHIDStringIdentifierEventDeferringToken : BKSHIDEventDeferringToken {
    NSString *_stringIdentifier;
}

+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForProtobufDecoding;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)_string;
- (BOOL)_isString;
- (id)init;
- (id)_initWithString:(id)a0;

@end
