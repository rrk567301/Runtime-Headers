@class NSString, MPExportableArtworkProperties;

@interface MPNowPlayingContentItemLegacyRemoteArtworkToken : NSObject <MPArtworkDataSourceVisualIdenticality>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *artworkIdentifier;
@property (readonly, copy, nonatomic) MPExportableArtworkProperties *artworkProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 artworkProperties:(id)a1 artworkIdentifier:(id)a2;

@end
