@class NSString, NSMutableArray, NSArray;

@interface AXAuditInspectorSection : NSObject <AXAuditTransportableObjectProtocol>

@property (retain, nonatomic) NSMutableArray *_elementAttributes;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL allowsFilter;
@property (readonly, retain, nonatomic) NSArray *elementAttributes;
@property (readonly, nonatomic) BOOL hasActions;
@property (readonly, nonatomic) BOOL displaysHierarchy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleForType:(long long)a0;
+ (id)identifierForType:(long long)a0;
+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)initWithType:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAttribute:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)addAttribute:(id)a0 performsAction:(BOOL)a1 humanReadable:(id)a2 settable:(BOOL)a3 valueType:(long long)a4 isInternal:(BOOL)a5;
- (id)elementAttributes;

@end
