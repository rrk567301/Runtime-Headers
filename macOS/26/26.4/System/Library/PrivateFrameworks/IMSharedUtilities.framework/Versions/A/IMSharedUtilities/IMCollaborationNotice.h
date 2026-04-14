@class NSString, NSDate, IMCollaborationNoticeMetadata;

@interface IMCollaborationNotice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *guidString;
@property (retain, nonatomic) NSString *senderHandle;
@property (retain, nonatomic) IMCollaborationNoticeMetadata *metadata;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *dateViewed;

+ (id)deduplicateNotices:(id)a0;
+ (id)noticeWithGUIDString:(id)a0 sender:(id)a1 metadata:(id)a2 date:(id)a3 dateViewed:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)deduplicationKey;
- (id)initWithGUIDString:(id)a0 sender:(id)a1 metadata:(id)a2 date:(id)a3 dateViewed:(id)a4;
- (BOOL)wantsEphemeralDismissal;

@end
