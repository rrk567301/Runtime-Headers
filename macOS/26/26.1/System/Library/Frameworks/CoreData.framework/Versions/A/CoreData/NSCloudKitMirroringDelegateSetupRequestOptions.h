@interface NSCloudKitMirroringDelegateSetupRequestOptions : NSCloudKitMirroringRequestOptions {
    BOOL _fromNotification;
}

- (id)copy;
- (id)createDefaultOperationConfiguration;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
