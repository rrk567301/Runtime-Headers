@class NSData, CNContact;

@interface SLCollaborationAttributionRecipientDrawingMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *contactImageData;
@property (readonly, nonatomic) CNContact *contact;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithContact:(id)a0 contactImageData:(id)a1;

@end
