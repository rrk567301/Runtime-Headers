@interface GPProcessInfo : NSObject

@property struct { unsigned int val[8]; } auditToken;
@property (getter=isIdentifiedGame) BOOL identifiedGame;

+ (id)processInfo;

- (id)init;

@end
