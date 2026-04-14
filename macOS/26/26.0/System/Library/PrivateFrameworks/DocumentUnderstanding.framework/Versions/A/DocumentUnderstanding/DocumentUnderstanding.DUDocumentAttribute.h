@interface DocumentUnderstanding.DUDocumentAttribute : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ attributeNamespace;
    void /* unknown type, empty encoding */ attributeType;
    void /* unknown type, empty encoding */ attributeID;
    void /* unknown type, empty encoding */ displayName;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
