@interface VMUAttributeGraphRegionIdentifier : NSObject {
    void /* unknown type, empty encoding */ oldAttributeGraphVMRegionBaseAddresses;
}

@property (nonatomic, readonly) unsigned long long attributeGraphVMRegionBaseAddress;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTask:(id)a0 identifyOldRegions:(BOOL)a1;
- (BOOL)regionIsOldAttributeGraphVMRegionMapping:(unsigned long long)a0;

@end
