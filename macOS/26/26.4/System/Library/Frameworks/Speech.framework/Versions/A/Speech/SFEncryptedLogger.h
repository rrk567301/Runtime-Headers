@interface SFEncryptedLogger : NSObject {
    void /* unknown type, empty encoding */ loggerHolder;
}

@property (class, nonatomic, readonly) SFEncryptedLogger *service;
@property (class, nonatomic, readonly) SFEncryptedLogger *client;

+ (BOOL)enableBypass;
+ (BOOL)isBypassed;
+ (void)setEnableBypass:(BOOL)a0;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isEnabledForType:(unsigned char)a0;
- (id)initWithSubsystem:(id)a0 category:(id)a1;
- (void)logForType:(unsigned char)a0 message:(id)a1;

@end
