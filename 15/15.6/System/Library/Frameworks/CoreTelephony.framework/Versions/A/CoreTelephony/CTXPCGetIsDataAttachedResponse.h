@interface CTXPCGetIsDataAttachedResponse : CTXPCResponseMessage

@property (readonly, nonatomic) char isDataAttached;

+ (id)allowedClassesForArguments;

- (id)initWithIsDataAttached:(char)a0;

@end
