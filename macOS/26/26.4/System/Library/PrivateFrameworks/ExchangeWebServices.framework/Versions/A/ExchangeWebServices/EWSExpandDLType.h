@class EWSEmailAddressType;

@interface EWSExpandDLType : EWSBaseRequestType

@property (retain, nonatomic) EWSEmailAddressType *Mailbox;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;

@end
