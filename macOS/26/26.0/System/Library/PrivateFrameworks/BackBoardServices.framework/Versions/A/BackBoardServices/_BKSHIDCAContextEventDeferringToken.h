@interface _BKSHIDCAContextEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CAContextID;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (BOOL)_isIdentifierOfCAContext;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)description;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (unsigned int)_identifierOfCAContext;
- (BOOL)isEqual:(id)a0;
- (id)_initWithIdentifier:(unsigned int)a0;

@end
