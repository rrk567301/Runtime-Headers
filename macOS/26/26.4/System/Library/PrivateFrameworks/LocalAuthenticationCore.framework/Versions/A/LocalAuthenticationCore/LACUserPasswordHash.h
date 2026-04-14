@class NSData;

@interface LACUserPasswordHash : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ salt;
    void /* function */ contextRef;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *salt;
@property (nonatomic, readonly) long long iterations;
@property (nonatomic, readonly) NSData *contextRef;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithContextRef:(id)a0 salt:(id)a1 iterations:(long long)a2;

@end
