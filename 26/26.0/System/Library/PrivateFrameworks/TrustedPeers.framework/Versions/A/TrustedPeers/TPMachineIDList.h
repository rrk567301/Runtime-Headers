@class NSArray;

@interface TPMachineIDList : NSObject

@property (readonly) NSArray *entries;

- (id)initWithEntries:(id)a0;
- (id)description;
- (id)entryFor:(id)a0;
- (void).cxx_destruct;
- (id)machineIDsInStatus:(unsigned long long)a0;

@end
