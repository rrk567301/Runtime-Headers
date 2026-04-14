@class ODNode, DSLog, NSString, ODRecord;

@interface DSLocale : NSObject

@property (retain) DSLog *log;
@property (retain) ODNode *node;
@property (retain) ODRecord *groupRec;
@property (retain) NSString *groupRecName;
@property (retain) NSString *name;

+ (id)localeByFindingExistingLocaleWithName:(id)a0;
+ (id)localeByFindingExistingLocaleWithGroupRec:(id)a0;
+ (id)localeByCreatingNewLocaleWithName:(id)a0;
+ (id)getAllLocales;
+ (BOOL)addLocaleOverlay;
+ (void)createLocaleConfig:(id)a0;
+ (void)createInterfaceLocales;
+ (BOOL)hasBeenLocalified:(id)a0;
+ (void)localeifyIfNeeded:(id)a0;
+ (id)localeLog;
+ (unsigned int)pickGID;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setComment:(id)a0;
- (void)deleteLocale;
- (id)initByFindingExistingLocaleWithName:(id)a0;
- (id)initByFindingExistingLocaleWithGroupRec:(id)a0;
- (id)initByCreatingNewLocaleWithName:(id)a0;
- (BOOL)isDefaultLocale;
- (id)getComment;
- (id)getSubnets;
- (void)addSubnet:(id)a0;
- (void)removeSubnet:(id)a0;
- (id)getServerNames;
- (id)getIPAddrsForServer:(id)a0;
- (void)addServer:(id)a0 withIPAddr:(id)a1;
- (void)removeServer:(id)a0 withIPAddr:(id)a1;
- (id)getLocaleGroupRec;
- (id)createLocaleGroupRec;
- (id)getNormalizedServerName:(id)a0;
- (id)getAllServerRecs;
- (id)getServerRec:(id)a0;
- (BOOL)serverExistsInLocale:(id)a0 withIPAddr:(id)a1;
- (id)getServerDict:(id)a0;
- (void)updateXMLPlistInCompRec:(id)a0 withIPAddr:(id)a1 usingBlock:(id /* block */)a2;

@end
