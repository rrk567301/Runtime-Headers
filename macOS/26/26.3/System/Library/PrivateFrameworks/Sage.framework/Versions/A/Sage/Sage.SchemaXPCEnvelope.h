@class NSData;

@interface Sage.SchemaXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _schema;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_schema;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
