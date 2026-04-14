@interface _BKSHIDCGSWindowIDEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CGSWindowID;
}

+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)_identifierOfCGSWindow;
- (id)description;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isIdentifierOfCGSWindow;
- (id)_initWithCGSWindowID:(unsigned int)a0;

@end
