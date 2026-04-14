@class NSString;

@interface MCMessageAttachmentMetadatum : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *attachmentID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 attachmentID:(id)a1;

@end
