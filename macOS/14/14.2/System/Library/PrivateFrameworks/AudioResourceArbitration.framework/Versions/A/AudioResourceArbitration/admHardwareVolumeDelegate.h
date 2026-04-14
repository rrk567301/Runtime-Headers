@class NSString;

@interface admHardwareVolumeDelegate : NSObject <dspd_HardwareVolumeDelegate> {
    struct shared_ptr<caulk::reactor<aura::adm::HardwareVolume *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } reactor_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct error_code { int x0; struct error_category *x1; })setStereoPan:(unsigned long long)a0 element:(unsigned int)a1 stereoPan:(float)a2;
- (struct expected<float, std::error_code> { union constexpr_storage<float, std::error_code> { char x0; float x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })convertDecibelsToScalar:(unsigned long long)a0 element:(unsigned int)a1 decibelVolume:(float)a2;
- (struct expected<float, std::error_code> { union constexpr_storage<float, std::error_code> { char x0; float x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })convertScalarToDecibels:(unsigned long long)a0 element:(unsigned int)a1 scalarVolume:(float)a2;
- (struct expected<float, std::error_code> { union constexpr_storage<float, std::error_code> { char x0; float x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })decibelVolume:(unsigned long long)a0 element:(unsigned int)a1;
- (struct expected<std::tuple<double, double>, std::error_code> { union constexpr_storage<std::tuple<double, double>, std::error_code> { char x0; struct tuple<double, double> { struct __tuple_impl<std::__tuple_indices<0, 1>, double, double> { double x0; double x1; } x0; } x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })decibelVolumeRange:(unsigned long long)a0 element:(unsigned int)a1;
- (id)initWithReactor:(struct shared_ptr<caulk::reactor<aura::adm::HardwareVolume *>> { void *x0; struct __shared_weak_count *x1; })a0;
- (struct expected<bool, std::error_code> { union constexpr_storage<bool, std::error_code> { char x0; BOOL x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })isMuted:(unsigned long long)a0 element:(unsigned int)a1;
- (struct expected<bool, std::error_code> { union constexpr_storage<bool, std::error_code> { char x0; BOOL x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })levelControlSettable:(unsigned long long)a0 element:(unsigned int)a1;
- (struct expected<bool, std::error_code> { union constexpr_storage<bool, std::error_code> { char x0; BOOL x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })muteControlSettable:(unsigned long long)a0 element:(unsigned int)a1;
- (struct expected<float, std::error_code> { union constexpr_storage<float, std::error_code> { char x0; float x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })scalarVolume:(unsigned long long)a0 element:(unsigned int)a1;
- (struct error_code { int x0; struct error_category *x1; })setDecibelVolume:(unsigned long long)a0 element:(unsigned int)a1 decibelVolume:(float)a2;
- (struct error_code { int x0; struct error_category *x1; })setLevelControlValueChangeObserver:(unsigned long long)a0 element:(unsigned int)a1 observer:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;
- (struct error_code { int x0; struct error_category *x1; })setMuteControlValueChangeObserver:(unsigned long long)a0 element:(unsigned int)a1 observer:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;
- (struct error_code { int x0; struct error_category *x1; })setMuted:(unsigned long long)a0 element:(unsigned int)a1 isMuted:(BOOL)a2;
- (struct error_code { int x0; struct error_category *x1; })setScalarVolume:(unsigned long long)a0 element:(unsigned int)a1 scalarVolume:(float)a2;
- (struct error_code { int x0; struct error_category *x1; })setStereoPanControlValueChangeObserver:(unsigned long long)a0 element:(unsigned int)a1 observer:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;
- (struct expected<float, std::error_code> { union constexpr_storage<float, std::error_code> { char x0; float x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })stereoPan:(unsigned long long)a0 element:(unsigned int)a1;
- (struct expected<std::tuple<unsigned int, unsigned int>, std::error_code> { union constexpr_storage<std::tuple<unsigned int, unsigned int>, std::error_code> { char x0; struct tuple<unsigned int, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1>, unsigned int, unsigned int> { unsigned int x0; unsigned int x1; } x0; } x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })stereoPanChannels:(unsigned long long)a0 element:(unsigned int)a1;
- (struct expected<bool, std::error_code> { union constexpr_storage<bool, std::error_code> { char x0; BOOL x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })stereoPanControlSettable:(unsigned long long)a0 element:(unsigned int)a1;

@end
