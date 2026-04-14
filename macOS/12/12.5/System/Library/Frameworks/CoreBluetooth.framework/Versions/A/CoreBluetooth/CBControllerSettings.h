@interface CBControllerSettings : NSObject <CUXPCCodable>

@property (nonatomic) char setupAssistantIfNoKeyboard;
@property (nonatomic) char setupAssistantIfNoPointingDevice;

- (id)description;
- (id)descriptionWithLevel:(int)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;

@end
