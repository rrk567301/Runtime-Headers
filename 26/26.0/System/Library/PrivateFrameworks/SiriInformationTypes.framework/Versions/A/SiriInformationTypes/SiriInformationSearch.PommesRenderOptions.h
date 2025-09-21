@interface SiriInformationSearch.PommesRenderOptions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isImmersiveExperience;
    void /* unknown type, empty encoding */ isSquawkResponse;
    void /* unknown type, empty encoding */ isPhoneCallActive;
    void /* unknown type, empty encoding */ switchProfile;
    void /* unknown type, empty encoding */ preserveResultSpaceIfPossible;
    void /* unknown type, empty encoding */ promptTypes;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
