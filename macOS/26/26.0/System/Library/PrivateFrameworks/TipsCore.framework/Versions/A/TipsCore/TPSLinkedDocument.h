@class NSString;

@interface TPSLinkedDocument : TPSSerializableObject {
    void /* function */ bundleId;
    void /* function */ documentId;
    void /* function */ platform;
    void /* function */ product;
    void /* function */ productVersion;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *documentId;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, copy) NSString *product;
@property (nonatomic, copy) NSString *productVersion;

+ (id)linkedDocumentFromDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
