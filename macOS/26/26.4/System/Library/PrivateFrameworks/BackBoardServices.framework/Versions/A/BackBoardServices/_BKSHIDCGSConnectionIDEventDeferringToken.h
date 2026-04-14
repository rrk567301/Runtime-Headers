@interface _BKSHIDCGSConnectionIDEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CGSConnectionID;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (id)initForProtobufDecoding;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned int)_identifierOfCGSConnection;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)_isIdentifierOfCGSConnection;
- (id)_initWithCGSConnectionID:(unsigned int)a0;

@end
