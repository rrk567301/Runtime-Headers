@class NSString, NSDate;

@interface Rapport.RPPairingPINInfo : NSObject {
    void /* function */ deviceName;
    void /* function */ givenName;
    void /* function */ familyName;
    void /* function */ pin;
    void /* unknown type, empty encoding */ pake;
    void /* unknown type, empty encoding */ createdAt;
}

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *givenName;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *pin;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
