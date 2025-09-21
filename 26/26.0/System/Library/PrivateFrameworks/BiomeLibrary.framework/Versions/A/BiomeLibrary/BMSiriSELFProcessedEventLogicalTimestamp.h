@class NSUUID, NSString, NSData;

@interface BMSiriSELFProcessedEventLogicalTimestamp : BMEventBase <BMStoreData> {
    NSData *_raw_clockIdentifier;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) long long timestampInNanoseconds;
@property (nonatomic) BOOL hasTimestampInNanoseconds;
@property (readonly, nonatomic) NSUUID *clockIdentifier;
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
- (id)initWithTimestampInNanoseconds:(id)a0 clockIdentifier:(id)a1;

@end
