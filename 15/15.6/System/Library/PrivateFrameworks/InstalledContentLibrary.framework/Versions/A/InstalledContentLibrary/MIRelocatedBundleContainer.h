@interface MIRelocatedBundleContainer : MIBundleContainer

- (unsigned long long)diskUsage;
- (char)makeContainerLiveReplacingContainer:(id)a0 reason:(unsigned long long)a1 waitForDeletion:(char)a2 withError:(id *)a3;
- (char)makeContainerLiveWithError:(id *)a0;
- (char)purgeContentWithError:(id *)a0;
- (char)regenerateDirectoryUUIDWithError:(id *)a0;
- (char)shouldHaveCorrespondingDataContainer;

@end
