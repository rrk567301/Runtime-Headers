@class NSString, NSUUID, NSArray;

@interface BMPersonalizedSensingMomentsContextMomentsContextString : BMEventBase <BMStoreData> {
    NSString *_raw_stringIdentifier;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *textString;
@property (readonly, nonatomic) NSUUID *stringIdentifier;
@property (readonly, nonatomic) NSArray *dimensions;
@property (readonly, nonatomic) unsigned int contentType;
@property (nonatomic) BOOL hasContentType;
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
- (id)_dimensionsJSONArray;
- (id)initWithTextString:(id)a0 stringIdentifier:(id)a1 dimensions:(id)a2;
- (id)initWithTextString:(id)a0 stringIdentifier:(id)a1 dimensions:(id)a2 contentType:(id)a3;

@end
