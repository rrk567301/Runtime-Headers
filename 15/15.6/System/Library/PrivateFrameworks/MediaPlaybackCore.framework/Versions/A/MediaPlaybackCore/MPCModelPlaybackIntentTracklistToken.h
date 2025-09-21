@class MPPropertySet, MPModelRequest, MPIdentifierSet;

@interface MPCModelPlaybackIntentTracklistToken : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) MPPropertySet *requiredPropertiesForStaticMediaClips;
@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) MPModelRequest *request;
@property (copy, nonatomic) MPIdentifierSet *startItemIdentifiers;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
