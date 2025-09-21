@interface MAUSBHostCapabilities : MAUSBObject

@property (readonly) unsigned short maxOutstandingManagementRequests;
@property (readonly) char mediaTimeAvailable;
@property (readonly) char linkSleepCapable;

+ (id)defaults;

- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithCapabilityRequestPacket:(id)a0;
- (id)initWithMaxOutstandingManagementRequests:(unsigned short)a0 mediaTimeAvailable:(char)a1 linkSleepCapable:(char)a2;

@end
