@class NSString, NSDictionary;

@interface HomeKitDaemon.ResidentStatusProtobufSerializerDomainDataPair : NSObject {
    void /* function */ domain;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSDictionary *rawPayload;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDomain:(id)a0 rawPayload:(id)a1;

@end
