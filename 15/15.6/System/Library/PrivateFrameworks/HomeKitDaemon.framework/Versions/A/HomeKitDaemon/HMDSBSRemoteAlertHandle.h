@class NSString;

@interface HMDSBSRemoteAlertHandle : HMFObject <HMDSBSRemoteAlertHandle>

@property (readonly, getter=isActive) char active;
@property (readonly, getter=isValid) char valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
