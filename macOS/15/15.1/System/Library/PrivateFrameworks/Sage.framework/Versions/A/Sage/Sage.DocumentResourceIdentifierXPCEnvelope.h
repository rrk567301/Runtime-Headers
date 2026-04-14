@class NSData;

@interface Sage.DocumentResourceIdentifierXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _documentIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_documentIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
