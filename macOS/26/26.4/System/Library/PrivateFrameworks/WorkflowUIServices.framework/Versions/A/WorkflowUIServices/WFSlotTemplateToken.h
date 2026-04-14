@class NSString, WFIcon, NSHashTable;

@interface WFSlotTemplateToken : NSObject

@property (readonly, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) WFIcon *icon;
@property (nonatomic) BOOL isAvailable;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 icon:(id)a1 isAvailable:(BOOL)a2;
- (void)propertiesUpdated;
- (void)updatePropertiesWithToken:(id)a0;

@end
