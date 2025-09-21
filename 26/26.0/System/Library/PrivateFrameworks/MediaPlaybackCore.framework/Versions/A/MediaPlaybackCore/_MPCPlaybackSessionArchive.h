@class NSString, NSImage, MPNowPlayingContentItem, NSDate;

@interface _MPCPlaybackSessionArchive : MSVSegmentedCodingPackage

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) MPNowPlayingContentItem *contentItem;
@property (copy, nonatomic) NSImage *artworkImage;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;

+ (id)packageTypeIdentifier;

- (BOOL)saveWithError:(id *)a0;
- (id)description;
- (id)initWithURL:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)writeWithError:(id *)a0;
- (id)initWithURL:(id)a0 identifier:(id)a1;

@end
