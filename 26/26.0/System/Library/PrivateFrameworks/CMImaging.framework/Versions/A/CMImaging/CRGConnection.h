@class CRGPort;

@interface CRGConnection : NSObject

@property (readonly, nonatomic) CRGPort *from;
@property (readonly, nonatomic) CRGPort *to;

- (void).cxx_destruct;
- (id)initWithFrom:(id)a0 to:(id)a1;

@end
