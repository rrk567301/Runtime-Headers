@interface _BKSHIDCAContextEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CAContextID;
}

+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (BOOL)_isIdentifierOfCAContext;
- (id)_initWithIdentifier:(unsigned int)a0;
- (unsigned int)_identifierOfCAContext;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
