@class CDPContext;
@protocol CDPDCircleProxy;

@interface CDPManateeStateController : NSObject {
    id<CDPDCircleProxy> _circleProxy;
    CDPContext *_context;
}

- (id)initWithContext:(id)a0 circleProxy:(id)a1;
- (id)initWithContext:(id)a0;
- (BOOL)isManateeAvailable:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_checkCircleStateWithError:(id *)a0;
- (id)init;

@end
