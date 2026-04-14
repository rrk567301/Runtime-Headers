@interface CTXPCGetIsDataAttachedResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL isDataAttached;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithIsDataAttached:(BOOL)a0;

@end
