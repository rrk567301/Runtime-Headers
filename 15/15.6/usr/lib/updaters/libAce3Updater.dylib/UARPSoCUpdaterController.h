@class NSString, NSDictionary, SoCUpdaterHelper, NSMutableArray;

@interface UARPSoCUpdaterController : NSObject {
    SoCUpdaterHelper *_log;
    char _skipSameVersion;
    NSMutableArray *_updaters;
    NSDictionary *_personalizationRequests;
    char _forceLocalSigning;
}

@property (readonly) char isDone;
@property (readonly) NSString *restorePartition;
@property (readonly) NSDictionary *personalizationRequests;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (char)applyStagedFirmware;
- (id)createUpdaterInstanceFor:(unsigned int)a0 helper:(id)a1 options:(id)a2;
- (id)firmwareTags;
- (char)initializeUpdatersWithOptions:(id)a0;
- (unsigned int)numberOfAvailableUnits;
- (char)offerFirmwareDataWithDictionary:(id)a0;
- (char)offerFirmwareForUpdater:(id)a0 inputDict:(id)a1;
- (char)offerPersonalizationDataWithDictionary:(id)a0;
- (id)queryInfo;
- (id)ticketNameTags;

@end
