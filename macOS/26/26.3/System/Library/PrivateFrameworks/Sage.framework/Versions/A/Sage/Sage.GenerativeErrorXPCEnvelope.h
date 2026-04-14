@class NSData;

@interface Sage.GenerativeErrorXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _error;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_error;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
