@class NSString, NSMutableArray;

@interface MPModelLibraryPlaylistEditTransactionDetails : NSObject

@property (copy, nonatomic) NSMutableArray *changes;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *referenceIdentifier;

- (void)addChange:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (void)addChanges:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 referenceIdentifier:(id)a1 changes:(id)a2;
- (id)initWithIdentifier:(id)a0 changes:(id)a1;
- (id)initWithIdentifier:(id)a0 referenceIdentifier:(id)a1;

@end
