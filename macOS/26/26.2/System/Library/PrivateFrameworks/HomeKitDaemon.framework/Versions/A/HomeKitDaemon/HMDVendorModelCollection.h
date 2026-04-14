@class HMDVendorModelEntry, NSMutableSet;

@interface HMDVendorModelCollection : HMFObject {
    NSMutableSet *_entries;
}

@property (retain, nonatomic) HMDVendorModelEntry *defaultEntry;

- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)addEntry:(id)a0;
- (id)init;
- (id)initWithEncodedData:(id)a0;
- (id)asEncodedData;
- (id)lookupModel:(id)a0;
- (id)lookupProductData:(id)a0;

@end
