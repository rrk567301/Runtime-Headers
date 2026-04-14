@class DIURL;

@interface HTTPBackendXPC : BackendXPC

@property (copy, nonatomic) DIURL *URL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)addToURLWithUser:(id)a0 password:(id)a1;
- (void)createBackendWithSize:(unsigned long long)a0;
- (void)createBackend;
- (BOOL)lookupPasswordInKeychainWithRealm:(id)a0;
- (BOOL)askForPasswordUsingTTY;
- (BOOL)askForPasswordUsingGUI;

@end
