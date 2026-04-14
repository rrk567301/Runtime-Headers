@interface DocumentUnderstanding.DUDocumentIdentifier : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ documentNamespace;
    void /* unknown type, empty encoding */ documentID;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
