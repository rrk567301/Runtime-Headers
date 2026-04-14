@class NSString, NSURL, NSArray;

@interface CRKBookmark : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSArray *children;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isFavoritesFolder) BOOL favoritesFolder;
@property (readonly, nonatomic, getter=isReadingListFolder) BOOL readingListFolder;

+ (id)folderWithName:(id)a0 children:(id)a1 identifier:(id)a2;
+ (id)favoritesFolderWithChildren:(id)a0;
+ (id)readingListFolderWithChildren:(id)a0;
+ (id)folderWithName:(id)a0 children:(id)a1;
+ (id)leafBookmarkWithName:(id)a0 URL:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)setUrlString:(id)a0;
- (id)urlString;
- (BOOL)isFolder;
- (id)initWithName:(id)a0 URL:(id)a1 children:(id)a2 identifier:(id)a3;
- (BOOL)isFolderWithIdentifier:(id)a0;
- (id)childBookmarks;
- (void)setChildBookmarks:(id)a0;

@end
