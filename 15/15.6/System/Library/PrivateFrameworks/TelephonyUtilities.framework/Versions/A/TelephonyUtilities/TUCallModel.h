@interface TUCallModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char supportsHolding;
@property (nonatomic) char supportsGrouping;
@property (nonatomic) char supportsUngrouping;
@property (nonatomic) char supportsDTMF;
@property (nonatomic) char supportsUnambiguousMultiPartyState;
@property (nonatomic) char supportsAddCall;
@property (nonatomic) char supportsSendingToVoicemail;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
