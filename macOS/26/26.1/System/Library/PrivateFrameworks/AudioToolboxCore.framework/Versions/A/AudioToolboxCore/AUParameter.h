@class NSString, NSArray, _AUStaticParameterInfo;

@interface AUParameter : AUParameterNode <NSSecureCoding> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _localValueStale;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _numUIObservers;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _numRecordingObservers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long address;
@property (retain, nonatomic) _AUStaticParameterInfo *info;
@property (readonly) float minValue;
@property (readonly) float maxValue;
@property (readonly) unsigned int unit;
@property (readonly, copy) NSString *unitName;
@property (readonly) unsigned int flags;
@property (readonly, copy) NSArray *valueStrings;
@property (readonly, copy) NSArray *dependentParameters;
@property float value;

- (void)_observersChanged:(BOOL)a0 deltaCount:(int)a1;
- (BOOL)localValueStale;
- (id)copyNodeWithOffset:(unsigned long long)a0;
- (id)stringFromValue:(const float *)a0;
- (unsigned int)_originalOrder;
- (void)setLocalValueStale:(BOOL)a0;
- (void)set_clumpID:(unsigned int)a0;
- (float)_defaultValue;
- (id).cxx_construct;
- (float)_internalValue;
- (void)encodeWithCoder:(id)a0;
- (void)setValue:(float)a0 extOriginator:(struct AUParameterObserverExtendedToken { unsigned long long x0; })a1 atHostTime:(unsigned long long)a2 eventType:(unsigned int)a3;
- (void)setValue:(float)a0 originator:(void *)a1;
- (void)setValue:(float)a0 originator:(void *)a1 atHostTime:(unsigned long long)a2;
- (void)set_defaultValue:(float)a0;
- (void)set_originalOrder:(unsigned int)a0;
- (id)description;
- (void)dealloc;
- (void)setValue:(float)a0 originator:(void *)a1 atHostTime:(unsigned long long)a2 eventType:(unsigned int)a3;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (float)valueFromString:(id)a0;
- (id)initWithID:(id)a0 name:(id)a1 address:(unsigned long long)a2 min:(float)a3 max:(float)a4 unit:(unsigned int)a5 unitName:(id)a6 flags:(unsigned int)a7 valueStrings:(id)a8 dependentParameters:(id)a9;
- (unsigned int)_clumpID;

@end
