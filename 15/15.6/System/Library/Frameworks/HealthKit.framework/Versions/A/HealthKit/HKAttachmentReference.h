@class NSUUID, NSString, HKAttachment, NSDate, NSDictionary;

@interface HKAttachmentReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *objectIdentifier;
@property (readonly, copy) HKAttachment *attachment;
@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSDictionary *metadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0 objectIdentifier:(id)a1 attachment:(id)a2 creationDate:(id)a3 metadata:(id)a4;

@end
