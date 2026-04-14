@class MTMaterialLayer, NSDate;

@interface MTPrunePromise : NSObject {
    MTMaterialLayer *_materialLayer;
    NSDate *_timeStamp;
}

@property (nonatomic, getter=isPromiseFulfilled) BOOL promiseFulfilled;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fulfillPromise;
- (id)initWithMaterialLayer:(id)a0;
- (double)timeIntervalSincePromise;

@end
