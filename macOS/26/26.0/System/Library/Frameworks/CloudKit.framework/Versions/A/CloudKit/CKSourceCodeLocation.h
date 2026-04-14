@class NSURL, NSString;

@interface CKSourceCodeLocation : NSObject <CKPropertiesDescription, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *fileURL;
@property (readonly) unsigned long long lineNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)CKShortDescriptionRedact:(BOOL)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithFilePath:(id)a0 lineNumber:(unsigned long long)a1;
- (id)initWithFileURL:(id)a0 lineNumber:(unsigned long long)a1;

@end
