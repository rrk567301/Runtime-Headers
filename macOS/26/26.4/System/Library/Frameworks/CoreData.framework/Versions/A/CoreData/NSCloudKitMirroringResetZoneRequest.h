@class NSArray;

@interface NSCloudKitMirroringResetZoneRequest : NSCloudKitMirroringRequest {
    NSArray *_recordZoneIDsToReset;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;

@end
