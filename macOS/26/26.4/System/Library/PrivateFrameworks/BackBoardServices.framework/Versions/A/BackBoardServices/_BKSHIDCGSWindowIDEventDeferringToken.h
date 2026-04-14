@interface _BKSHIDCGSWindowIDEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CGSWindowID;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (id)initForProtobufDecoding;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned int)_identifierOfCGSWindow;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)_isIdentifierOfCGSWindow;
- (id)_initWithCGSWindowID:(unsigned int)a0;

@end
