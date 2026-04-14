@interface _BKSHIDCAContextEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CAContextID;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (id)initForProtobufDecoding;
- (BOOL)_isIdentifierOfCAContext;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned int)_identifierOfCAContext;
- (id)_initWithIdentifier:(unsigned int)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;

@end
