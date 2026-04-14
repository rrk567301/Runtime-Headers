@interface _BKSHIDCGSWindowIDEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CGSWindowID;
}

+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForProtobufDecoding;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isIdentifierOfCGSWindow;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)_identifierOfCGSWindow;
- (id)description;
- (id)_initWithCGSWindowID:(unsigned int)a0;

@end
