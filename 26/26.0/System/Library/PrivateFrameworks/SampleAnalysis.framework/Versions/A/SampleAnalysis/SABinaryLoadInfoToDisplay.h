@class SAExclave;

@interface SABinaryLoadInfoToDisplay : SABinaryLoadInfo {
    SAExclave *_exclave;
    BOOL _isInKernelAddressSpace;
}

@property unsigned long long highestOffset;
@property BOOL isZerothAndOnlySegment;

- (BOOL)isInKernelAddressSpace;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)exclave;

@end
