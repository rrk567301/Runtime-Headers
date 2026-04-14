@class NSString;

@interface _BKSHIDStringIdentifierEventDeferringToken : BKSHIDEventDeferringToken {
    NSString *_stringIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)initForProtobufDecoding;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_string;
- (BOOL)_isString;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithString:(id)a0;

@end
