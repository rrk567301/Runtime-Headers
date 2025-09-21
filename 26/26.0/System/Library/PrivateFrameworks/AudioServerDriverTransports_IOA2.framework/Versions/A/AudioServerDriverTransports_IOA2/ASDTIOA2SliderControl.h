@class ASDTIOA2Device, NSArray, NSString;

@interface ASDTIOA2SliderControl : ASDSliderControl <ASDTIOA2Control> {
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
}

@property (weak, nonatomic) ASDTIOA2Device *ioa2Device;
@property (nonatomic) unsigned int userClientID;
@property (readonly, nonatomic) NSArray *propertySelectorInfo;
@property (retain, nonatomic) NSArray *properties;
@property (nonatomic) BOOL marked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfValue;

- (void)setValue:(unsigned int)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)changeValue:(unsigned int)a0;
- (void)pushValue:(unsigned int)a0;
- (void)doSetValue:(unsigned int)a0;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 isSettable:(BOOL)a2 forElement:(unsigned int)a3 inScope:(unsigned int)a4 objectClassID:(unsigned int)a5 dictionary:(id)a6;
- (BOOL)synchronizeWithRegistryDictionary:(id)a0;

@end
