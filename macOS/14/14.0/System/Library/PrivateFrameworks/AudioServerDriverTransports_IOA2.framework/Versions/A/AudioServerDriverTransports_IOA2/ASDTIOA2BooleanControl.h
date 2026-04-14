@class NSString, ASDTIOA2Device;

@interface ASDTIOA2BooleanControl : ASDBooleanControl <ASDTIOA2Control> {
    ASDTIOA2Device *_ioa2Device;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
}

@property (copy, nonatomic) id /* block */ setterBlock;
@property (readonly, nonatomic) unsigned int userClientID;
@property (nonatomic) BOOL marked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfValue;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setValue:(BOOL)a0;
- (BOOL)changeValue:(BOOL)a0;
- (void)pushValue:(unsigned int)a0;
- (void)doSetValue:(BOOL)a0;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 isSettable:(BOOL)a2 element:(unsigned int)a3 scope:(unsigned int)a4 objectClassID:(unsigned int)a5 dictionary:(id)a6;
- (BOOL)synchronizeWithRegistry;

@end
