@class GPAutoEDRParameters;

@interface GPProcessInfo : NSObject

@property struct { unsigned int val[8]; } auditToken;
@property (getter=isIdentifiedGame) BOOL identifiedGame;
@property (retain, getter=autoEDRParameters) GPAutoEDRParameters *autoEDRParameters;

+ (id)processInfo;

- (void).cxx_destruct;
- (id)init;

@end
