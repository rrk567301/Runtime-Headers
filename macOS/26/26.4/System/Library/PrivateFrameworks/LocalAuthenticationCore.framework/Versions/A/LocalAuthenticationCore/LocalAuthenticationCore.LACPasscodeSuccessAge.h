@interface LocalAuthenticationCore.LACPasscodeSuccessAge : NSObject {
    void /* unknown type, empty encoding */ lastPasscodeSuccessUptime;
}

@property (nonatomic, readonly) double passcodeSuccessAge;

- (id)init;
- (void)updateWithCurrentSystemUptime;
- (void)updateWithUptime:(id)a0;

@end
