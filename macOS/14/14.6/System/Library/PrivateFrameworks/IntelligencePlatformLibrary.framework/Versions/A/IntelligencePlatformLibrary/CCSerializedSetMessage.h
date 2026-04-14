@class NSString, NSArray;

@interface CCSerializedSetMessage : CCItemMessage

@property (readonly, nonatomic) BOOL hasItemType;
@property (readonly, nonatomic) unsigned int itemType;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSArray *descriptors;
@property (readonly, nonatomic) BOOL hasSharedItemCount;
@property (readonly, nonatomic) unsigned int sharedItemCount;
@property (readonly, nonatomic) BOOL hasLocalItemInstanceCount;
@property (readonly, nonatomic) unsigned int localItemInstanceCount;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)initWithItemType:(id)a0 accountIdentifier:(id)a1 descriptors:(id)a2 sharedItemCount:(id)a3 localItemInstanceCount:(id)a4 devices:(id)a5 items:(id)a6 error:(id *)a7;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
