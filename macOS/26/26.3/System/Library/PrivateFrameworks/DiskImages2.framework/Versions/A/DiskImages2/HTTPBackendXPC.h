@class DIURL;

@interface HTTPBackendXPC : BackendXPC

@property (copy, nonatomic) DIURL *URL;

+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addToURLWithUser:(id)a0 password:(id)a1;
- (BOOL)askForPasswordUsingGUI;
- (BOOL)askForPasswordUsingTTY;
- (void)createBackend;
- (void)createBackendWithSize:(unsigned long long)a0;
- (BOOL)lookupPasswordInKeychainWithRealm:(id)a0;

@end
