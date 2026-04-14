@interface PGMemoryMapDescriptor : NSObject {
    struct vector<PGGuestPhysicalRange_s, std::allocator<PGGuestPhysicalRange_s>> { struct PGGuestPhysicalRange_s *__begin_; struct PGGuestPhysicalRange_s *__end_; struct { struct PGGuestPhysicalRange_s *__cap_; } ; } _ranges;
}

- (void)addRange:(struct PGGuestPhysicalRange_s { unsigned long long x0; unsigned long long x1; void *x2; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct vector<PGGuestPhysicalRange_s, std::allocator<PGGuestPhysicalRange_s>> { struct PGGuestPhysicalRange_s *x0; struct PGGuestPhysicalRange_s *x1; struct { struct PGGuestPhysicalRange_s *x0; } x2; })getRanges;

@end
