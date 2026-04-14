@interface _BKSHIDCAContextEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CAContextID;
}

+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)a0;
- (unsigned int)_identifierOfCAContext;
- (id)initWithCoder:(id)a0;
- (id)initForProtobufDecoding;
- (unsigned long long)hash;
- (id)_initWithIdentifier:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)_isIdentifierOfCAContext;
- (id)init;

@end
