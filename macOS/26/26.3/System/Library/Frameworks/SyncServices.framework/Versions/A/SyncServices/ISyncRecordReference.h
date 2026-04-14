@interface ISyncRecordReference : NSObject <NSCoding>

+ (id)recordReferenceForRecordWithIdentifier:(id)a0 usingSnapshot:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
