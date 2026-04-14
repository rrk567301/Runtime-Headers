@class NSString, NSDictionary;

@interface WBSAutoplayQuirkWhitelistSnapshot : NSObject <WBSRemotelyUpdatableDataSnapshot> {
    NSDictionary *_domainsToQuirkTypes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)snapshotData;
- (id)initWithSnapshotData:(id)a0 error:(id *)a1;
- (unsigned long long)quirkTypeForDomain:(id)a0;

@end
