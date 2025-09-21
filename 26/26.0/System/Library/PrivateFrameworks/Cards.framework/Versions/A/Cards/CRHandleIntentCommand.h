@class INIntent;

@interface CRHandleIntentCommand : CRBasicPayloadCommand

@property (copy, nonatomic) INIntent *intent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)payload;
- (void).cxx_destruct;

@end
