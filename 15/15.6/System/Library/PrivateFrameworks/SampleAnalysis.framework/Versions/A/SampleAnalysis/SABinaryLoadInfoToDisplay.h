@class SAExclave;

@interface SABinaryLoadInfoToDisplay : SABinaryLoadInfo {
    SAExclave *_exclave;
    char _isInKernelAddressSpace;
}

@property unsigned long long highestOffset;
@property BOOL isZerothAndOnlySegment;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)exclave;
- (char)isInKernelAddressSpace;

@end
