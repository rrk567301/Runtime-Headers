@class NSError;

@interface NSCloudKitMirroringDelegateResetRequest : NSCloudKitMirroringRequest {
    NSError *_causedByError;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithError:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;

@end
