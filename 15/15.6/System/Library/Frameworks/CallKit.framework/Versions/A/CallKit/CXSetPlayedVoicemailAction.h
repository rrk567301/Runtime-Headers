@interface CXSetPlayedVoicemailAction : CXVoicemailAction

@property (nonatomic, getter=isPlayed) char played;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)initWithVoicemailUUID:(id)a0 played:(char)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
