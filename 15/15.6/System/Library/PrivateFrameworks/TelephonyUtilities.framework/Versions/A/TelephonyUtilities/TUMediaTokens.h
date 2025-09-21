@class NSDictionary;

@interface TUMediaTokens : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long uplinkStreamToken;
@property (nonatomic) long long downlinkStreamToken;
@property (retain, nonatomic) NSDictionary *streamTokensByParticipantID;
@property (nonatomic) long long combinedAudioStreamToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToMediaTokens:(id)a0;

@end
