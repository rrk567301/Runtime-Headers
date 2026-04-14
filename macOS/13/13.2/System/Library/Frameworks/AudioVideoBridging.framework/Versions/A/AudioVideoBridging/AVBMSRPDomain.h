@class IOKNotificationPort, IOKInterestNotification, AVBInterface, NSString, IOKService, NSObject;
@protocol OS_dispatch_queue;

@interface AVBMSRPDomain : NSObject {
    IOKService *_service;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_interestNotification;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSString *_interfaceName;
}

@property (weak) AVBInterface *interface;

+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;

- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (id)commonInit;
- (id)initWithInterfaceName:(id)a0;
- (unsigned char)priorityForTrafficClass:(unsigned char)a0;
- (unsigned short)vlanIDForTrafficClass:(unsigned char)a0;
- (id)msrpDomainInformation;

@end
