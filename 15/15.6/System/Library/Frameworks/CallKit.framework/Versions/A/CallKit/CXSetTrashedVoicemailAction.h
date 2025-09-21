@interface CXSetTrashedVoicemailAction : CXVoicemailAction

@property (nonatomic, getter=isTrashed) char trashed;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)initWithVoicemailUUID:(id)a0 trashed:(char)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
