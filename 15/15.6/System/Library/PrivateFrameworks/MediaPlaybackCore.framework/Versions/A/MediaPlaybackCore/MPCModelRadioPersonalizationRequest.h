@class MPSectionedCollection;

@interface MPCModelRadioPersonalizationRequest : MPModelRequest <NSCopying> {
    MPSectionedCollection *_radioStationTracks;
}

@property (nonatomic) char analyticsSignpostsEnabled;

+ (char)supportsSecureCoding;
+ (char)requiresNetwork;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)initWithRadioStationTracks:(id)a0;

@end
