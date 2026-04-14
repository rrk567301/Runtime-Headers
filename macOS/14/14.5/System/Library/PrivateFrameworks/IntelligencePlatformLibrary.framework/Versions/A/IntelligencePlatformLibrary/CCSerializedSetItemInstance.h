@class NSData;

@interface CCSerializedSetItemInstance : CCItemMessage

@property (readonly, nonatomic) NSData *metaContent;
@property (readonly, nonatomic) BOOL hasInstanceIdentifier;
@property (readonly, nonatomic) long long instanceIdentifier;

- (void).cxx_destruct;
- (id)initWithMetaContent:(id)a0 instanceIdentifier:(id)a1 error:(id *)a2;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
