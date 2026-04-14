@class NSString;

@interface MPCMRContentItemArtworkDataToken : NSObject <MPArtworkDataSourceVisualIdenticality>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *artworkIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringRepresentation;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 artworkIdentifier:(id)a1;

@end
