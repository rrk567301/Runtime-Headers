@class _DPStorage, NSString;

@interface _DPToolCommand : NSObject

@property (readonly, nonatomic) _DPStorage *storage;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) NSString *arguments;
@property (readonly, copy, nonatomic) NSString *metadata;
@property (readonly, copy, nonatomic) NSString *recordKey;
@property (readonly, copy, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) char writeOK;

+ (id)supportedCommands;
+ (id)command:(id)a0 arguments:(id)a1 metadata:(id)a2 recordKey:(id)a3 databasePath:(id)a4 writeOK:(char)a5;
+ (id)supportedMetadataKeys;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)executeCommand;
- (char)listReportsFor:(id)a0;
- (id)floatVectorsFromCSVString:(id)a0;
- (id)initWithAction:(id)a0 arguments:(id)a1 metadata:(id)a2 recordKey:(id)a3 databasePath:(id)a4 writeOK:(char)a5;
- (char)listKeys;
- (id)metadataFromCSVString:(id)a0;
- (id)queryForKey:(id)a0;
- (char)recordBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (char)recordBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (char)recordFloatVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (char)recordNumbers:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (char)recordNumbersVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (char)recordStrings:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (char)recordWords:(id)a0 forKey:(id)a1;
- (char)submitRecordsForKey:(id)a0;

@end
