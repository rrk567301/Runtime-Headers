@class NSString;

@interface VUIAppDocumentPurchaseEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSString *canonicalID;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDescriptor:(id)a0;
- (id)initWithPurchaseEventDescriptor:(id)a0;
- (id)_purchaseEventDescriptor;

@end
