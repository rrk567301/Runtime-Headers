@class NSString, NSData, NSDictionary;

@interface WFSerializedSmartPromptPerWorkflowState : NSObject

@property (readonly, nonatomic) NSString *actionUUID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0 actionUUID:(id)a1;

@end
