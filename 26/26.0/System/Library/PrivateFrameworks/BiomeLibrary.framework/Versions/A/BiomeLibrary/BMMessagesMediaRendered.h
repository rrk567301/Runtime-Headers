@class NSArray, NSString, NSDate;

@interface BMMessagesMediaRendered : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSArray *mediaAttributes;
@property (readonly, nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL hasIsOnScreen;
@property (readonly, nonatomic) BOOL isFirstView;
@property (nonatomic) BOOL hasIsFirstView;
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
- (id)initWithAbsoluteTimestamp:(id)a0 mediaAttributes:(id)a1 isOnScreen:(id)a2 isFirstView:(id)a3;
- (id)_mediaAttributesJSONArray;

@end
