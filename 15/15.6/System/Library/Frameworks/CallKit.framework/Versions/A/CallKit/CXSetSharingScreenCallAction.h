@class CXScreenShareAttributes;

@interface CXSetSharingScreenCallAction : CXCallAction

@property (nonatomic, getter=isSharingScreen) char sharingScreen;
@property (retain, nonatomic) CXScreenShareAttributes *attributes;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)initWithCallUUID:(id)a0 sharingScreen:(char)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
