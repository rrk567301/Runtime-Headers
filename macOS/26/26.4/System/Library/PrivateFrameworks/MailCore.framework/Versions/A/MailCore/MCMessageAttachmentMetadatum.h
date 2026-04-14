@class NSString;

@interface MCMessageAttachmentMetadatum : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *attachmentID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 attachmentID:(id)a1;

@end
