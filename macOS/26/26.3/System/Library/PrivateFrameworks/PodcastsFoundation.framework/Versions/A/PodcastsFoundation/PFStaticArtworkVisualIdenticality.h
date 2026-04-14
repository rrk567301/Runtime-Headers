@class NSString;

@interface PFStaticArtworkVisualIdenticality : NSObject <NSCopying> {
    NSString *_artworkIdentifier;
}

- (id)stringRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithArtworkIdentifier:(id)a0;

@end
