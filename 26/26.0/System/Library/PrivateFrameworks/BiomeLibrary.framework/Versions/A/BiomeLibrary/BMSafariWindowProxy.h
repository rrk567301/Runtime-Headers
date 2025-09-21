@class NSString, NSDate;

@interface BMSafariWindowProxy : BMEventBase <BMStoreData> {
    BOOL _hasRaw_visited;
    double _raw_visited;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *openedDomain;
@property (readonly, nonatomic) NSDate *visited;
@property (readonly, nonatomic) int property;
@property (readonly, nonatomic) BOOL accessedPropertyDirectly;
@property (nonatomic) BOOL hasAccessedPropertyDirectly;
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
- (id)initWithDomain:(id)a0 openedDomain:(id)a1 visited:(id)a2 property:(int)a3 accessedPropertyDirectly:(id)a4;

@end
