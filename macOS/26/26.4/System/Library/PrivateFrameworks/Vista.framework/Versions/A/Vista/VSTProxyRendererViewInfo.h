@interface VSTProxyRendererViewInfo : NSObject

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } viewToWorld;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } projection;

- (id)init;

@end
