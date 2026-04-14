@class NSData;

@interface Sage.SchemaXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _schema;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_schema;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
