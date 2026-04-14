@class CKServerChangeToken;

@interface CKFetchArchivedRecordsOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;

+ (id)new;

- (id)initWithPreviousServerChangeToken:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
