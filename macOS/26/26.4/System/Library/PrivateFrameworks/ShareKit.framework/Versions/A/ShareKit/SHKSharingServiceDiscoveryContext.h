@class NSArray, SFShareSheetSessionManager, SFShareSheetSessionTestingDataDump;

@interface SHKSharingServiceDiscoveryContext : NSObject

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *collaborationItems;
@property (nonatomic) unsigned long long mask;
@property (nonatomic) BOOL shouldUseMask;
@property (nonatomic) BOOL invokedByPicker;
@property (nonatomic) BOOL allowDisabledExtensions;
@property (nonatomic) BOOL onlyActionExtensions;
@property (retain, nonatomic) SFShareSheetSessionManager *sessionManager;
@property (retain, nonatomic) SFShareSheetSessionTestingDataDump *testingReferenceDataDump;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0 collaborationItems:(id)a1 invokedByPicker:(BOOL)a2 allowDisabledExtensions:(BOOL)a3 onlyActionExtensions:(BOOL)a4 sessionManager:(id)a5 testingReferenceDataDump:(id)a6;
- (id)initWithItems:(id)a0 collaborationItems:(id)a1 mask:(unsigned long long)a2 shouldUseMask:(BOOL)a3 invokedByPicker:(BOOL)a4 allowDisabledExtensions:(BOOL)a5 onlyActionExtensions:(BOOL)a6 sessionManager:(id)a7 testingReferenceDataDump:(id)a8;
- (id)initWithItems:(id)a0 invokedByPicker:(BOOL)a1 allowDisabledExtensions:(BOOL)a2 onlyActionExtensions:(BOOL)a3;
- (id)initWithItems:(id)a0 invokedByPicker:(BOOL)a1 allowDisabledExtensions:(BOOL)a2 onlyActionExtensions:(BOOL)a3 sessionManager:(id)a4 testingReferenceDataDump:(id)a5;
- (id)initWithItems:(id)a0 mask:(unsigned long long)a1 invokedByPicker:(BOOL)a2;
- (id)initWithItems:(id)a0 mask:(unsigned long long)a1 invokedByPicker:(BOOL)a2 allowDisabledExtensions:(BOOL)a3;

@end
