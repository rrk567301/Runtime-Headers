@class NSString, NSDictionary, NSData, NSURL;

@interface DownloadFile : NSObject {
    long long _type;
    BOOL _isAliasOrSymlink;
}

@property (copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSData *bookmarkData;
@property (readonly, copy, nonatomic) NSString *aliasedOrOriginalPath;
@property (readonly, nonatomic) NSURL *aliasedOrOriginalURL;
@property (readonly, nonatomic) BOOL isArchive;
@property (readonly, nonatomic) BOOL isBOM;
@property (readonly, nonatomic) BOOL isGZIP;
@property (nonatomic) BOOL isSubFile;
@property (nonatomic) BOOL isTrashed;
@property (readonly, nonatomic) BOOL isMovableOrRemovable;
@property (readonly, copy, nonatomic) NSDictionary *securityAssessment;

+ (id)filesForUnarchivedFileAtPath:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)_MIMETypeFromExtension;
- (BOOL)_isMIMEType:(id)a0;
- (void)_setInitialDownloadPath:(id)a0;
- (void)_setType;
- (BOOL)_isBOM;
- (BOOL)_isGZIP;
- (id)initWithBookmarkData:(id)a0 pathString:(id)a1;
- (void)setTypeWithEncoding:(id)a0;

@end
