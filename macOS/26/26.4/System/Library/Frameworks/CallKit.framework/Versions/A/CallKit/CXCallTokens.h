@class NSDictionary;

@interface CXCallTokens : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long uplinkStreamToken;
@property (nonatomic) long long downlinkStreamToken;
@property (nonatomic) long long combinedAudioStreamToken;
@property (retain, nonatomic) NSDictionary *streamTokensByParticipantID;

- (id)sanitizedCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToCallTokens:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
