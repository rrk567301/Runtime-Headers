@class CNCDIOSLegacyIdentifierRegistrarState;

@interface CNCDIOSLegacyIdentifierRegistrarInMemoryPersistence : NSObject <CNCDIOSLegacyIdentifierRegistrarPersistence>

@property (retain, nonatomic) CNCDIOSLegacyIdentifierRegistrarState *state;

- (void).cxx_destruct;
- (id)initWithState:(id)a0;
- (char)saveState:(id)a0 error:(id *)a1;

@end
