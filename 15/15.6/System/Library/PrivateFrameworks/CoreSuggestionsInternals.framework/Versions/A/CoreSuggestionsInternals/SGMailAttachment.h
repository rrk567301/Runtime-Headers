@class NSString;

@interface SGMailAttachment : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *filename;
@property (nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) char isDownloadedLocally;
@property (readonly, nonatomic) char isCalendarMimeType;
@property (readonly, nonatomic) char isMediaMimeType;
@property (readonly, nonatomic) char isApplicationMimeType;
@property (readonly, nonatomic) char isOthersMimeType;
@property (readonly, nonatomic) char isWalletOrderMimeType;
@property (readonly, nonatomic) char isWalletPassMimeType;

+ (id)attachmentWithType:(id)a0 filename:(id)a1 path:(id)a2;
+ (id)attachmentsFromBiomeAttachments:(id)a0;
+ (id)attachmentsFromSearchableItem:(id)a0;
+ (id)testAttachmentWithType:(id)a0 size:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 filename:(id)a1 path:(id)a2;
- (char)isCalendarMimeType;
- (id)mimeCategory;

@end
