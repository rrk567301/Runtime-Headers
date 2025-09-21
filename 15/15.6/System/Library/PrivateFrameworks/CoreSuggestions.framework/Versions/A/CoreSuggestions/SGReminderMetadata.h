@class NSString, SGRecordId;

@interface SGReminderMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) SGRecordId *recordId;
@property (readonly, nonatomic) NSString *sourceUniqueIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordId:(id)a0 sourceUniqueIdentifier:(id)a1;
- (char)isEqualToReminderMetadata:(id)a0;

@end
