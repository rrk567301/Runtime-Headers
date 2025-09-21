@class NSString, NSDictionary, NSData, NSURL;

@interface DownloadFile : NSObject {
    long long _type;
    char _isAliasOrSymlink;
}

@property (readonly, copy, nonatomic) NSString *MIMETypeFromFileExtension;
@property (copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSData *bookmarkData;
@property (readonly, copy, nonatomic) NSString *aliasedOrOriginalPath;
@property (readonly, nonatomic) NSURL *aliasedOrOriginalURL;
@property (readonly, nonatomic) char isArchive;
@property (readonly, nonatomic) char isBOM;
@property (readonly, nonatomic) char isGZIP;
@property (nonatomic) char isSubFile;
@property (nonatomic) char isTrashed;
@property (readonly, nonatomic) char isMovableOrRemovable;
@property (readonly, copy, nonatomic) NSDictionary *securityAssessment;

+ (id)filesForUnarchivedFileAtPath:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (char)_isGZIP;
- (char)_isBOM;
- (char)_isMIMEType:(id)a0;
- (void)_setInitialDownloadPath:(id)a0;
- (void)_setType;
- (id)initWithBookmarkData:(id)a0 pathString:(id)a1;
- (void)setTypeWithEncoding:(id)a0;

@end
