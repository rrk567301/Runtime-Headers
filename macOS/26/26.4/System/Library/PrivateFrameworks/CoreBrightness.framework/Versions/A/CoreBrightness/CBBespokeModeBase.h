@class NSString;
@protocol CBAABCurveProtocol;

@interface CBBespokeModeBase : NSObject <CBBespokeMode>

@property (readonly, nonatomic) long long type;
@property (copy) id<CBAABCurveProtocol> aab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithType:(long long)a0 andAAB:(id)a1;

@end
