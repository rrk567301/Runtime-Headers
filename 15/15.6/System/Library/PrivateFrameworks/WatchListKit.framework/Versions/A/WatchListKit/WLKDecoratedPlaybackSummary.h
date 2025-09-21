@class NSString, WLKPlaybackSummary;

@interface WLKDecoratedPlaybackSummary : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) WLKPlaybackSummary *summary;
@property (readonly, copy, nonatomic) NSString *canonicalID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithSummary:(id)a0 canonicalID:(id)a1;

@end
