@class NSDictionary;

@interface TUMediaTokens : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long uplinkStreamToken;
@property (nonatomic) long long downlinkStreamToken;
@property (retain, nonatomic) NSDictionary *streamTokensByParticipantID;
@property (nonatomic) long long combinedAudioStreamToken;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToMediaTokens:(id)a0;

@end
