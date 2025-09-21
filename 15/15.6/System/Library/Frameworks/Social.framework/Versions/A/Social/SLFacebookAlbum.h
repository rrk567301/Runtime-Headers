@class NSString;

@interface SLFacebookAlbum : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (retain) NSString *coverPhotoIdentifier;
@property long long count;
@property char canUpload;
@property char isDefaultAlbum;

+ (id)albumWithDataDictionary:(id)a0;
+ (id)albumsWithAlbumDataDictionaries:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
