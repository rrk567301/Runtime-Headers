@class NSData;

@interface Sage.DocumentIdentifierXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _document;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_document;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
