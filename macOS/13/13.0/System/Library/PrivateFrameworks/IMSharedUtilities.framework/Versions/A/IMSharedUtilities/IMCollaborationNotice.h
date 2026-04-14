@class NSString, NSDate, IMCollaborationNoticeMetadata;

@interface IMCollaborationNotice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *guidString;
@property (retain, nonatomic) NSString *senderHandle;
@property (retain, nonatomic) IMCollaborationNoticeMetadata *metadata;
@property (retain, nonatomic) NSDate *date;

+ (id)noticeWithGUIDString:(id)a0 sender:(id)a1 metadata:(id)a2 date:(id)a3;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGUIDString:(id)a0 sender:(id)a1 metadata:(id)a2 date:(id)a3;
- (BOOL)wantsEphemeralDismissal;

@end
