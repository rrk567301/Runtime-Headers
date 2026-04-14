@interface SGMailIntelligenceMissingAttachmentWarning : SGMailIntelligenceComposeWarning

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (unsigned char)warningType;

@end
