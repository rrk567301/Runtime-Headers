@class NSDictionary;

@interface TUMediaTokens : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long uplinkStreamToken;
@property (nonatomic) long long downlinkStreamToken;
@property (retain, nonatomic) NSDictionary *streamTokensByParticipantID;
@property (nonatomic) long long combinedAudioStreamToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToMediaTokens:(id)a0;

@end
