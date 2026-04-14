@class NSUUID, NSDictionary, MTRDevice, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface MTRAttributeValueWaiter : NSObject {
    NSDictionary *_valueExpectations;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _completion;
    MTRDevice *_device;
}

@property (readonly, nonatomic) BOOL allValuesSatisfied;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *expirationTimer;
@property (readonly, nonatomic) NSUUID *UUID;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)_attributeValue:(id)a0 reportedForPath:(id)a1 byDevice:(id)a2;
- (void)_notifyWithError:(id)a0;
- (id)initWithDevice:(id)a0 values:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
