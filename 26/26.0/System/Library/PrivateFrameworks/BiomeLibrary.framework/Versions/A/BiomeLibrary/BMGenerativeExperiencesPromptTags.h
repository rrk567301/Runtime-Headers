@class NSUUID, NSString, NSArray, NSData;

@interface BMGenerativeExperiencesPromptTags : BMEventBase <BMStoreData> {
    NSData *_raw_itemId;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *itemId;
@property (readonly, nonatomic) NSString *usecaseId;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) NSString *userInterfaceLanguage;
@property (readonly, nonatomic) NSString *userSetRegionFormat;
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
- (id)_tagsJSONArray;
- (id)initWithItemId:(id)a0 usecaseId:(id)a1 tags:(id)a2 modelName:(id)a3 modelVersion:(id)a4 userInterfaceLanguage:(id)a5 userSetRegionFormat:(id)a6;

@end
