@class NSString;

@interface ScriptInfo : NSObject

@property (readonly, nonatomic) unsigned long long scriptID;
@property (readonly, nonatomic) NSString *scriptName;
@property (readonly, nonatomic) unsigned int apduCount;
@property (readonly, nonatomic) unsigned int scriptType;
@property (readonly, nonatomic) unsigned int platformCategory;
@property (readonly, nonatomic) BOOL isProductionSigned;
@property (readonly, nonatomic) unsigned int nvmRequired;
@property (readonly, nonatomic) unsigned int corRequired;
@property (readonly, nonatomic) unsigned int codRequired;
@property (readonly, nonatomic) unsigned int indicesRequired;

- (void).cxx_destruct;
- (id)initWithScriptID:(unsigned long long)a0 scriptName:(id)a1 apduCount:(unsigned int)a2 scriptType:(unsigned int)a3;
- (id)initWithScriptID:(unsigned long long)a0 scriptName:(id)a1 apduCount:(unsigned int)a2 scriptType:(unsigned int)a3 platformCategory:(unsigned int)a4 isProductionSigned:(int)a5 nvmRequired:(unsigned int)a6 corRequired:(unsigned int)a7 codRequired:(unsigned int)a8 indicesRequired:(unsigned int)a9;

@end
