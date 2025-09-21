@class NSString, ASDTIOA2LegacyDevice;

@interface ASDTIOA2LegacyLevelControl : ASDLevelControl <ASDTIOA2LegacyControl> {
    ASDTIOA2LegacyDevice *_ioa2Device;
    struct CAVolumeCurve { unsigned int mTag; struct map<CARawPoint, CADBPoint, std::less<CARawPoint>, std::allocator<std::pair<const CARawPoint, CADBPoint>>> { struct __tree<std::__value_type<CARawPoint, CADBPoint>, std::__map_value_compare<CARawPoint, std::__value_type<CARawPoint, CADBPoint>, std::less<CARawPoint>>, std::allocator<std::__value_type<CARawPoint, CADBPoint>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } mCurveMap; BOOL mIsApplyingTransferFunction; unsigned int mTransferFunction; float mRawToScalarExponentNumerator; float mRawToScalarExponentDenominator; } _volumeCurve;
    unsigned int _rawValue;
}

@property (readonly, nonatomic) unsigned int userClientID;
@property (nonatomic) BOOL marked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfDecibelValue;
+ (BOOL)automaticallyNotifiesObserversOfScalarValue;
+ (struct CAVolumeCurve { unsigned int x0; struct map<CARawPoint, CADBPoint, std::less<CARawPoint>, std::allocator<std::pair<const CARawPoint, CADBPoint>>> { struct __tree<std::__value_type<CARawPoint, CADBPoint>, std::__map_value_compare<CARawPoint, std::__value_type<CARawPoint, CADBPoint>, std::less<CARawPoint>>, std::allocator<std::__value_type<CARawPoint, CADBPoint>>> { void *x0; struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x1; unsigned long long x2; } x0; } x1; BOOL x2; unsigned int x3; float x4; float x5; })volumeCurveFromControlInfo:(id)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)changeDecibelValue:(float)a0;
- (BOOL)changeScalarValue:(float)a0;
- (void)setDecibelValue:(float)a0;
- (void)pushValue:(unsigned int)a0;
- (void)doSetValue:(unsigned int)a0;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 isSettable:(BOOL)a2 forElement:(unsigned int)a3 inScope:(unsigned int)a4 objectClassID:(unsigned int)a5 dictionary:(id)a6;
- (BOOL)synchronizeWithRegistry;

@end
