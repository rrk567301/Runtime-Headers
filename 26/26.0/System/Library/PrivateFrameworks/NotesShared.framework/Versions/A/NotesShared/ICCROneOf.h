@class ICCRSet, NSMapTable, NSString;

@interface ICCROneOf : NSObject <ICCRDataType>

@property (retain, nonatomic) NSMapTable *timestamps;
@property (retain, nonatomic) ICCRSet *set;
@property (weak, nonatomic) id contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDocument:(id)a0;
- (void)addItem:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (void)mergeWith:(id)a0;
- (void)setUpdated:(id)a0;
- (id)init;
- (id)deltaSince:(id)a0 in:(id)a1;
- (id)tombstone;
- (void).cxx_destruct;
- (void)encodeWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0;
- (id)timestampForNewItem;

@end
