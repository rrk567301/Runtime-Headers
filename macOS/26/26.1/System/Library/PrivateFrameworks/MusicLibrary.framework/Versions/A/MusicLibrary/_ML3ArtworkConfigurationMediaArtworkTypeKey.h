@interface _ML3ArtworkConfigurationMediaArtworkTypeKey : NSObject <NSCopying> {
    unsigned int _mediaType;
    long long _artworkType;
}

+ (id)keyWithMediaType:(unsigned int)a0 artworkType:(long long)a1;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
