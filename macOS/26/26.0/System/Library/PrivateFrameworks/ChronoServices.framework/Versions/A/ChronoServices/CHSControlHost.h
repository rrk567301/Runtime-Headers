@class NSString, CHSControlConfiguration;

@interface CHSControlHost : NSObject {
    void /* unknown type, empty encoding */ _serverConnection;
    void /* unknown type, empty encoding */ _identifier;
    void /* unknown type, empty encoding */ _loggingIdentifier;
    void /* unknown type, empty encoding */ _activationState;
    void /* unknown type, empty encoding */ _invalid;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) CHSControlConfiguration *configuration;
@property (nonatomic, readonly) BOOL isActive;
@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (void)invalidate;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)deactivate;
- (void)activate;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1;

@end
