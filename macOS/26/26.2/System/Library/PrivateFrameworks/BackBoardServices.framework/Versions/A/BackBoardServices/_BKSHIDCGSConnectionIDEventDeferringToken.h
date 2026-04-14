@interface _BKSHIDCGSConnectionIDEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CGSConnectionID;
}

+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;

- (unsigned int)_identifierOfCGSConnection;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForProtobufDecoding;
- (unsigned long long)hash;
- (BOOL)_isIdentifierOfCGSConnection;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_initWithCGSConnectionID:(unsigned int)a0;

@end
