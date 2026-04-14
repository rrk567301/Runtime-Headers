@class NSMutableDictionary;

@interface AXAuditPreferenceController : NSObject

@property (class, readonly, nonatomic) AXAuditPreferenceController *sharedController;

@property (retain, nonatomic) NSMutableDictionary *preferenceDictionary;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSpinRunloop:(BOOL)a0;
- (BOOL)spinRunloop;

@end
