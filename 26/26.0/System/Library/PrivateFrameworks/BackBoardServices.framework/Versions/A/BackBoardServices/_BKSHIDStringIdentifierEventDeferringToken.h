@class NSString;

@interface _BKSHIDStringIdentifierEventDeferringToken : BKSHIDEventDeferringToken {
    NSString *_stringIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)_string;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)description;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (BOOL)_isString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithString:(id)a0;

@end
