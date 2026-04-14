@class NSObject;
@protocol CCDonateServiceProvider;

@interface CKVDonatorFactory : NSObject <CKVDonatorProvider> {
    NSObject<CCDonateServiceProvider> *_serviceProvider;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (id)donatorWithCascadeItemType:(unsigned short)a0 originAppId:(id)a1 error:(id *)a2;

@end
