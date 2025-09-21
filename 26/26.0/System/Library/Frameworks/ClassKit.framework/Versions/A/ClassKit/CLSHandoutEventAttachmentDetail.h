@class NSString;

@interface CLSHandoutEventAttachmentDetail : CLSObject

@property (readonly, nonatomic) NSString *attachmentID;
@property (readonly, nonatomic) int handoutAttachmentType;
@property (readonly, nonatomic) long long contextType;

+ (BOOL)supportsSecureCoding;

- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)validateObject:(id *)a0;
- (id)initWithAttachmentID:(id)a0 handoutAttachmentType:(int)a1 contextType:(long long)a2 appIdentifier:(id)a3;
- (void)mergeWithObject:(id)a0;

@end
