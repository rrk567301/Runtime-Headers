@class NSString;

@interface PKSharedPaymentWebServiceArchiver : NSObject <PKPaymentWebServiceArchiver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPaymentWebServiceArchiver;

- (void)archiveBackgroundContext:(id)a0;
- (void)archiveContext:(id)a0;

@end
