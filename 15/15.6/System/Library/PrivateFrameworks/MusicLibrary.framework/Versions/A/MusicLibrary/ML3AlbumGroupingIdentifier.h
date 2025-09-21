@class NSData, NSString;

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) long long albumArtistPersistentID;
@property (readonly, nonatomic) NSData *groupingKey;
@property (readonly, nonatomic) NSString *feedURL;
@property (readonly, nonatomic) long long seasonNumber;
@property (readonly, nonatomic) char compilation;
@property (retain, nonatomic) NSData *keyValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlbumArtistPersistentID:(long long)a0 groupingKey:(id)a1 feedURL:(id)a2 seasonNumber:(long long)a3 compilation:(char)a4;

@end
