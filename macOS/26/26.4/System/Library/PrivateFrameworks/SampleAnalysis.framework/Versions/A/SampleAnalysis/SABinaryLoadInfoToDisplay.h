@class SAExclave;

@interface SABinaryLoadInfoToDisplay : SABinaryLoadInfo {
    SAExclave *_exclave;
    BOOL _isInKernelAddressSpace;
}

@property unsigned long long highestOffset;
@property BOOL isZerothAndOnlySegment;

- (id)debugDescription;
- (BOOL)isInKernelAddressSpace;
- (void).cxx_destruct;
- (id)exclave;

@end
