@class EWSAttachmentIdType, NSString, NSDateComponents;

@interface EWSAttachmentType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSAttachmentIdType *AttachmentId;
@property (copy, nonatomic) NSString *Name;
@property (copy, nonatomic) NSString *ContentType;
@property (copy, nonatomic) NSString *ContentId;
@property (copy, nonatomic) NSString *ContentLocation;
@property (nonatomic) char IsInline;
@property (nonatomic) char IsInlineSpecified;
@property (retain, nonatomic) NSDateComponents *LastModifiedTime;
@property (nonatomic) char LastModifiedTimeSpecified;
@property (nonatomic) long long Size;
@property (nonatomic) char SizeSpecified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
