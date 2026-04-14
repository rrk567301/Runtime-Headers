@interface HomeKitClips.TransformableHMBShareInvitationContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ participantClientIdentifier;
    void /* unknown type, empty encoding */ lookupInfo;
    void /* unknown type, empty encoding */ shouldGrantWriteAccess;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
