@class ODNode, DSLog, NSString, ODRecord;

@interface DSLocale : NSObject

@property (retain) DSLog *log;
@property (retain) ODNode *node;
@property (retain) ODRecord *groupRec;
@property (retain) NSString *groupRecName;
@property (retain) NSString *name;

+ (id)localeLog;
+ (void)localeifyIfNeeded:(id)a0;
+ (id)localeByFindingExistingLocaleWithGroupRec:(id)a0;
+ (unsigned int)pickGID;
+ (id)localeByCreatingNewLocaleWithName:(id)a0;
+ (id)localeByFindingExistingLocaleWithName:(id)a0;
+ (BOOL)hasBeenLocalified:(id)a0;
+ (void)createLocaleConfig:(id)a0;
+ (void)createInterfaceLocales;
+ (BOOL)addLocaleOverlay;
+ (id)getAllLocales;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setComment:(id)a0;
- (void)deleteLocale;
- (id)initByFindingExistingLocaleWithName:(id)a0;
- (id)initByFindingExistingLocaleWithGroupRec:(id)a0;
- (id)initByCreatingNewLocaleWithName:(id)a0;
- (id)getLocaleGroupRec;
- (id)createLocaleGroupRec;
- (BOOL)isDefaultLocale;
- (id)getServerNames;
- (id)getIPAddrsForServer:(id)a0;
- (void)removeServer:(id)a0 withIPAddr:(id)a1;
- (id)getSubnets;
- (id)getServerDict:(id)a0;
- (id)getServerRec:(id)a0;
- (BOOL)serverExistsInLocale:(id)a0 withIPAddr:(id)a1;
- (void)updateXMLPlistInCompRec:(id)a0 withIPAddr:(id)a1 usingBlock:(id /* block */)a2;
- (id)getAllServerRecs;
- (id)getNormalizedServerName:(id)a0;
- (void)addSubnet:(id)a0;
- (void)addServer:(id)a0 withIPAddr:(id)a1;
- (id)getComment;
- (void)removeSubnet:(id)a0;

@end
