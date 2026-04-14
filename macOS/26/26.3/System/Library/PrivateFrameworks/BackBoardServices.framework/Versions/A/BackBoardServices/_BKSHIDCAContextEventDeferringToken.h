@interface _BKSHIDCAContextEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CAContextID;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)initForProtobufDecoding;
- (BOOL)_isIdentifierOfCAContext;
- (id)description;
- (unsigned int)_identifierOfCAContext;
- (id)init;
- (id)_initWithIdentifier:(unsigned int)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
