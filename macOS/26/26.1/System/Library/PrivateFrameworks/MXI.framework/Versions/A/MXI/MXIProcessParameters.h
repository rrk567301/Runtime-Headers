@interface MXIProcessParameters : NSObject

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } projection;
@property (nonatomic) BOOL linearDepth;

- (id)init;

@end
