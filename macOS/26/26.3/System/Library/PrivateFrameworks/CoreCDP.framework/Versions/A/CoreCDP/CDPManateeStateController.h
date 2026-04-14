@class CDPContext;
@protocol CDPDCircleProxy;

@interface CDPManateeStateController : NSObject {
    id<CDPDCircleProxy> _circleProxy;
    CDPContext *_context;
}

- (id)initWithContext:(id)a0;
- (BOOL)_checkCircleStateWithError:(id *)a0;
- (id)initWithContext:(id)a0 circleProxy:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isManateeAvailable:(id *)a0;

@end
