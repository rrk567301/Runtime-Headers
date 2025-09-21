@class EWSRootItemIdType;

@interface EWSDeleteAttachmentResponseMessageType : EWSResponseMessageType

@property (retain, nonatomic) EWSRootItemIdType *RootItemId;

+ (id)definition;

- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
