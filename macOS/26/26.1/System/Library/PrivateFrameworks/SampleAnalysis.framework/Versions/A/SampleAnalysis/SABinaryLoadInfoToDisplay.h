@class SAExclave;

@interface SABinaryLoadInfoToDisplay : SABinaryLoadInfo {
    SAExclave *_exclave;
    BOOL _isInKernelAddressSpace;
}

@property unsigned long long highestOffset;
@property BOOL isZerothAndOnlySegment;

- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isInKernelAddressSpace;
- (id)exclave;

@end
