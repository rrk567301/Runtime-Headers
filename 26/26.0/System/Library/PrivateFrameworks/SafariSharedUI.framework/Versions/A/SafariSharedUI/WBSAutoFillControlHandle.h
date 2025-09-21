@class _WKFrameHandle, NSString;

@interface WBSAutoFillControlHandle : NSObject <NSCopying> {
    void /* function */ controlID;
}

@property (nonatomic, readonly) _WKFrameHandle *frameHandle;
@property (nonatomic, readonly) long long formID;
@property (nonatomic, readonly) NSString *controlID;
@property (nonatomic, readonly) NSString *description;

+ (void)asynchronouslyEnumerateFramesOnQueue:(id)a0 withControlHandles:(id)a1 block:(id /* block */)a2 completionHandler:(id /* block */)a3;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrameHandle:(id)a0 formID:(long long)a1 controlID:(id)a2;
- (id)initWithFrameHandle:(id)a0 formMetadata:(id)a1 controlMetadata:(id)a2;

@end
