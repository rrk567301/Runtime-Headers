@class CDPContext;
@protocol CDPDCircleProxy;

@interface CDPManateeStateController : NSObject {
    id<CDPDCircleProxy> _circleProxy;
    CDPContext *_context;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (char)isManateeAvailable:(id *)a0;
- (char)_checkCircleStateWithError:(id *)a0;
- (id)initWithContext:(id)a0 circleProxy:(id)a1;

@end
