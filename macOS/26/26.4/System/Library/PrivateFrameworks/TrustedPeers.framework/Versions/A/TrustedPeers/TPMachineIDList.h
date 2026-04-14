@class NSArray;

@interface TPMachineIDList : NSObject

@property (readonly) NSArray *entries;

- (id)entryFor:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;
- (id)machineIDsInStatus:(unsigned long long)a0;
- (id)description;

@end
