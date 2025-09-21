@interface _BKSHIDCGSConnectionIDEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CGSConnectionID;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_isIdentifierOfCGSConnection;
- (unsigned int)_identifierOfCGSConnection;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)description;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithCGSConnectionID:(unsigned int)a0;

@end
