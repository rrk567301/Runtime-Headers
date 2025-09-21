@class NSString, NSMutableArray, NSArray;

@interface AXAuditInspectorSection : NSObject <AXAuditTransportableObjectProtocol>

@property (retain, nonatomic) NSMutableArray *_elementAttributes;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSArray *elementAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addAttribute:(id)a0;
- (id)addAttribute:(id)a0 performsAction:(char)a1 humanReadable:(id)a2 settable:(char)a3 valueType:(long long)a4 isInternal:(char)a5;
- (id)elementAttributes;

@end
