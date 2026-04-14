@interface HomeKitClips.TransformableHMBShareParticipant : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ ckShareParticipant;
    void /* unknown type, empty encoding */ clientIdentifier;
    void /* unknown type, empty encoding */ pendingInvitation;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
