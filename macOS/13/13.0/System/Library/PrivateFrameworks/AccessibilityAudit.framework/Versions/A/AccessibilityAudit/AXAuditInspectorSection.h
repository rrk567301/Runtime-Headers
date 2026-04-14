@class NSString, NSMutableArray, NSArray;

@interface AXAuditInspectorSection : NSObject

@property (retain, nonatomic) NSMutableArray *_elementAttributes;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSArray *elementAttributes;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)addAttribute:(id)a0;
- (id)addAttribute:(id)a0 performsAction:(BOOL)a1 humanReadable:(id)a2 settable:(BOOL)a3 valueType:(long long)a4 isInternal:(BOOL)a5;
- (id)elementAttributes;

@end
