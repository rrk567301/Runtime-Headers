@class NSString;

@interface PFStaticArtworkVisualIdenticality : NSObject <NSCopying> {
    NSString *_artworkIdentifier;
}

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringRepresentation;
- (void).cxx_destruct;
- (id)initWithArtworkIdentifier:(id)a0;

@end
