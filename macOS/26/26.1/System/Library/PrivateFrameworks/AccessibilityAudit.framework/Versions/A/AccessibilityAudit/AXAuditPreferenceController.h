@class NSMutableDictionary;

@interface AXAuditPreferenceController : NSObject

@property (class, readonly, nonatomic) AXAuditPreferenceController *sharedController;

@property (retain, nonatomic) NSMutableDictionary *preferenceDictionary;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)setSpinRunloop:(BOOL)a0;
- (BOOL)spinRunloop;

@end
