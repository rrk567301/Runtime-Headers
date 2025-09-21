@class NSUUID;

@interface _NSIPCallbackSerialization : NSObject {
    id /* block */ _endBlock;
    _Atomic char _hasBegun;
    _Atomic char _hasEnded;
    NSUUID *_UUID;
}

- (void)dealloc;
- (id)init;

@end
