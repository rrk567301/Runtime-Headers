@class NSString;

@interface DIAttributeDocumentScanRequirements : DIAttributeImageCaptureRequirements <NSSecureCoding, NSMutableCopying> {
    NSString *_countryCode;
    NSString *_type;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *countryCode;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDocumentScanRequirements:(id)a0;

@end
