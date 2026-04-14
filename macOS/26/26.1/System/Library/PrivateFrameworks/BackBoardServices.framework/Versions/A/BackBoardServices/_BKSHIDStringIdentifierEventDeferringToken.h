@class NSString;

@interface _BKSHIDStringIdentifierEventDeferringToken : BKSHIDEventDeferringToken {
    NSString *_stringIdentifier;
}

+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)a0;
- (unsigned long long)hash;
- (id)_string;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)_isString;
- (id)_initWithString:(id)a0;

@end
