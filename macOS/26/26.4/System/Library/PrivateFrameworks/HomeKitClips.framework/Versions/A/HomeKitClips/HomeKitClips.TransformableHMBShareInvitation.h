@interface HomeKitClips.TransformableHMBShareInvitation : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ shareURL;
    void /* unknown type, empty encoding */ token;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ cloudZoneID;
    void /* unknown type, empty encoding */ dateCreated;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
