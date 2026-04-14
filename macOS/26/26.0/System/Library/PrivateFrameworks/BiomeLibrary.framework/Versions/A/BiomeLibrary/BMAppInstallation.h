@class NSString, BMAppInstallationMetadata, NSDate, BMAppInstallationApp;

@interface BMAppInstallation : BMEventBase <BMStoreData> {
    BOOL _hasRaw_transitionDate;
    double _raw_transitionDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMAppInstallationApp *app;
@property (readonly, nonatomic) int transition;
@property (readonly, nonatomic) BMAppInstallationMetadata *metadata;
@property (readonly, nonatomic) NSDate *transitionDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithApp:(id)a0 transition:(int)a1 metadata:(id)a2 transitionDate:(id)a3;

@end
