@class CNCDIOSLegacyIdentifierRegistrarState;

@interface CNCDIOSLegacyIdentifierRegistrarInMemoryPersistence : NSObject <CNCDIOSLegacyIdentifierRegistrarPersistence>

@property (retain, nonatomic) CNCDIOSLegacyIdentifierRegistrarState *state;

- (id)initWithState:(id)a0;
- (void).cxx_destruct;
- (BOOL)saveState:(id)a0 error:(id *)a1;

@end
