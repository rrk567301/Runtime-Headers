@class NSData;

@interface Sage.GenerativeErrorXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _error;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_error;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
