@class NSString;

@interface VUIAppDocumentPurchaseEventDescriptor : VUIAppDocumentUpdateEventDescriptor

@property (copy, nonatomic) NSString *canonicalID;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEventType:(unsigned long long)a0;
- (id)initWithCanonicalID:(id)a0;

@end
