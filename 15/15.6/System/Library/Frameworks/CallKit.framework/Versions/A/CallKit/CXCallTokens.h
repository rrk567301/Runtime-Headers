@class NSDictionary;

@interface CXCallTokens : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long uplinkStreamToken;
@property (nonatomic) long long downlinkStreamToken;
@property (nonatomic) long long combinedAudioStreamToken;
@property (retain, nonatomic) NSDictionary *streamTokensByParticipantID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (char)isEqualToCallTokens:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
