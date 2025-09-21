@class CTNRStatus;

@interface CTXPCGetNRStatusResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTNRStatus *nrStatus;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithNRStatus:(id)a0;

@end
