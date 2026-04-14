@class MTMaterialLayer, NSDate;

@interface MTPrunePromise : NSObject {
    MTMaterialLayer *_materialLayer;
    NSDate *_timeStamp;
}

@property (nonatomic, getter=isPromiseFulfilled) BOOL promiseFulfilled;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMaterialLayer:(id)a0;
- (void)fulfillPromise;
- (double)timeIntervalSincePromise;

@end
