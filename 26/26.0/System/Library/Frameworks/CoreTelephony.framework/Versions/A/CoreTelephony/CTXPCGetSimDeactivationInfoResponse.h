@class CTSimDeactivationInfo;

@interface CTXPCGetSimDeactivationInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTSimDeactivationInfo *info;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithInfo:(id)a0;

@end
