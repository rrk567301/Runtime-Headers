@class NSString;

@interface EWSRequestAttachmentIdType : EWSBaseItemIdType <XSDefinitionProvider>

@property (copy, nonatomic) NSString *Id;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
