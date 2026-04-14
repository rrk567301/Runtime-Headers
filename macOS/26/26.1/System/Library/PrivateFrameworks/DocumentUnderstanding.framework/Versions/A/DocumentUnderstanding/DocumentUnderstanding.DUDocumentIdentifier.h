@interface DocumentUnderstanding.DUDocumentIdentifier : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ documentNamespace;
    void /* unknown type, empty encoding */ documentID;
    void /* unknown type, empty encoding */ spotlightBundleID;
    void /* unknown type, empty encoding */ spotlightDomainIdentifier;
    void /* unknown type, empty encoding */ spotlightUniqueIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)init;

@end
