@interface _BKSHIDCGSWindowIDEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CGSWindowID;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)initForProtobufDecoding;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isIdentifierOfCGSWindow;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)_identifierOfCGSWindow;
- (id)_initWithCGSWindowID:(unsigned int)a0;

@end
