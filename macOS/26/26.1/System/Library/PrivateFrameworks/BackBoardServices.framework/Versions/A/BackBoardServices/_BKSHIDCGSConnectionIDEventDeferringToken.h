@interface _BKSHIDCGSConnectionIDEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CGSConnectionID;
}

+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)a0;
- (unsigned long long)hash;
- (unsigned int)_identifierOfCGSConnection;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (BOOL)_isIdentifierOfCGSConnection;
- (BOOL)isEqual:(id)a0;
- (id)_initWithCGSConnectionID:(unsigned int)a0;

@end
