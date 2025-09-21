@interface GPTransientProcessInfo : NSObject

@property struct { unsigned int val[8]; } auditToken;
@property (getter=isAutoEDREnabled) char autoEDREnabled;
@property (getter=isGameFullscreen) char isFullscreen;

+ (id)transientProcessInfo;

- (id)init;

@end
