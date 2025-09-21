@class NSString, NSURL, NSArray;

@interface DMFBookmark : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSArray *children;
@property (readonly, nonatomic, getter=isFolder) char folder;
@property (readonly, nonatomic, getter=isFavoritesFolder) char favoritesFolder;
@property (readonly, nonatomic, getter=isReadingListFolder) char readingListFolder;

+ (id)favoritesFolderWithChildren:(id)a0;
+ (id)folderWithName:(id)a0 children:(id)a1;
+ (id)folderWithName:(id)a0 children:(id)a1 identifier:(id)a2;
+ (id)leafBookmarkWithName:(id)a0 URL:(id)a1;
+ (id)readingListFolderWithChildren:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isFolderWithIdentifier:(id)a0;
- (id)initWithName:(id)a0 URL:(id)a1 children:(id)a2 identifier:(id)a3;

@end
