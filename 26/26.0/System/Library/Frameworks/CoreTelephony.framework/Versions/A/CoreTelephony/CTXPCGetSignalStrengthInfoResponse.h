@class CTSignalStrengthInfo;

@interface CTXPCGetSignalStrengthInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTSignalStrengthInfo *signalInfo;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithSignalStrengthInfo:(id)a0;

@end
