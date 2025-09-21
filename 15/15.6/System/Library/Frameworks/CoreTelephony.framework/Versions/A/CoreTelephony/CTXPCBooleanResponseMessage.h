@interface CTXPCBooleanResponseMessage : CTXPCResponseMessage

@property (readonly, nonatomic) char result;

+ (id)allowedClassesForArguments;

- (id)initWithResult:(char)a0;

@end
