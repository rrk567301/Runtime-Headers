@class NSData;

@interface Sage.DocumentIdentifierXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _document;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_document;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
