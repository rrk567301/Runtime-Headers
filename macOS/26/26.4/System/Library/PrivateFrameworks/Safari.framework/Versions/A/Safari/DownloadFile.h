@class NSString, NSDictionary, NSURL, NSData;

@interface DownloadFile : NSObject {
    long long _type;
}

@property (readonly, copy, nonatomic) NSString *MIMETypeFromFileExtension;
@property (copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSData *bookmarkData;
@property (readonly, nonatomic) BOOL isArchive;
@property (readonly, nonatomic) BOOL isBOM;
@property (readonly, nonatomic) BOOL isGZIP;
@property (nonatomic) BOOL isSubFile;
@property (nonatomic) BOOL isTrashed;
@property (readonly, nonatomic) BOOL isMovableOrRemovable;
@property (readonly, copy, nonatomic) NSDictionary *securityAssessment;

+ (id)_fileURLForSingleChildItemAtURL:(id)a0;
+ (id)filesForUnarchivedFileAtURL:(id)a0;

- (id)initWithFileURL:(id)a0;
- (id)initWithBookmarkData:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_isGZIP;
- (BOOL)_isBOM;
- (BOOL)_isMIMEType:(id)a0;
- (void)_setType;
- (id)existingFileURLResolvingBookmarkDataIfNeededWithError:(id *)a0;
- (void)setTypeWithEncoding:(id)a0;

@end
