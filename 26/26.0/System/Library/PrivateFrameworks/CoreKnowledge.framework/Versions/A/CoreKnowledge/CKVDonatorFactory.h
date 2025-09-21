@class NSObject;
@protocol CCDonateServiceProvider;

@interface CKVDonatorFactory : NSObject <CKVDonatorProvider> {
    NSObject<CCDonateServiceProvider> *_serviceProvider;
}

- (id)donatorWithCascadeItemType:(unsigned short)a0 originAppId:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
