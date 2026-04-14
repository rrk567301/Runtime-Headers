@class NSString;

@interface _BKSHIDStringIdentifierEventDeferringToken : BKSHIDEventDeferringToken {
    NSString *_stringIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (BOOL)_isString;
- (id)initForProtobufDecoding;
- (id)_string;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_initWithString:(id)a0;

@end
