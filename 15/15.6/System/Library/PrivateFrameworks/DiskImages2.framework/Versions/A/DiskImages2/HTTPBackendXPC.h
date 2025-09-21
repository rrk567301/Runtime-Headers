@class DIURL;

@interface HTTPBackendXPC : BackendXPC

@property (copy, nonatomic) DIURL *URL;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void)addToURLWithUser:(id)a0 password:(id)a1;
- (char)askForPasswordUsingGUI;
- (char)askForPasswordUsingTTY;
- (void)createBackend;
- (void)createBackendWithSize:(unsigned long long)a0;
- (char)lookupPasswordInKeychainWithRealm:(id)a0;

@end
