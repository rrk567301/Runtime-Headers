@class EXSSyncEngine;

@interface EXSXPCInterfaceImplementation : NSObject <EXSXPCInterface>

@property (retain, nonatomic) EXSSyncEngine *syncEngine;

- (void).cxx_destruct;
- (void)reevaluateAccounts;
- (id)initWithSyncEngine:(id)a0;

@end
