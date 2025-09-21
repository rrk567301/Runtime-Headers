@class CKServerChangeToken;

@interface CKFetchArchivedRecordsOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPreviousServerChangeToken:(id)a0;

@end
