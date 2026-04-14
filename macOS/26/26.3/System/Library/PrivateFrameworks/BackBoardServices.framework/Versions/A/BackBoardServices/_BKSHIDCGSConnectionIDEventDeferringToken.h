@interface _BKSHIDCGSConnectionIDEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CGSConnectionID;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)initForProtobufDecoding;
- (id)description;
- (unsigned int)_identifierOfCGSConnection;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isIdentifierOfCGSConnection;
- (id)_initWithCGSConnectionID:(unsigned int)a0;

@end
