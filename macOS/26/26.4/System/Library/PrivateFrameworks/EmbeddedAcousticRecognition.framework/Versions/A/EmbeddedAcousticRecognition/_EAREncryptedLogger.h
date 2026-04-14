@interface _EAREncryptedLogger : NSObject {
    void /* unknown type, empty encoding */ loggerHolder;
}

+ (id)instance;

- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEnabledForType:(unsigned char)a0;
- (void)logForType:(unsigned char)a0 message:(id)a1;

@end
