@class NSNumber;

@interface CTXPCGetRejectCauseCodeResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSNumber *causeCode;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithCauseCode:(id)a0;

@end
