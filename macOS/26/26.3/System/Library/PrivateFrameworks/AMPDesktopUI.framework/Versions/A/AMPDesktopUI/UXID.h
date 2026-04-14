@interface UXID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) UXID *libraryIdentifier;
@property (class, readonly) UXID *appleMusicIdentifier;
@property (class, readonly) UXID *playlistsIdentifier;
@property (class, readonly) UXID *artistsIdentifier;
@property (class, readonly) UXID *albumsIdentifier;
@property (class, readonly) UXID *songsIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long databaseID;
@property (nonatomic) unsigned long long persistentID;

+ (id)random;

- (BOOL)isEqualToIdentifier:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
