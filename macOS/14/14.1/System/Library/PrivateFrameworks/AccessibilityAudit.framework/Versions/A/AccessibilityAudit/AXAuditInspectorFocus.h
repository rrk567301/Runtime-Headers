@class AXAuditElement, NSArray, NSString;

@interface AXAuditInspectorFocus : NSObject

@property (retain, nonatomic) AXAuditElement *element;
@property (retain, nonatomic) NSArray *inspectorSections;
@property (copy, nonatomic) NSString *captionText;
@property (copy, nonatomic) NSString *spokenDescription;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
