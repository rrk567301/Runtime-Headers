@interface _BKSHIDCGSWindowIDEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CGSWindowID;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (void)encodeWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)description;
- (id)initForProtobufDecoding;
- (BOOL)_isIdentifierOfCGSWindow;
- (id)initWithCoder:(id)a0;
- (unsigned int)_identifierOfCGSWindow;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithCGSWindowID:(unsigned int)a0;

@end
