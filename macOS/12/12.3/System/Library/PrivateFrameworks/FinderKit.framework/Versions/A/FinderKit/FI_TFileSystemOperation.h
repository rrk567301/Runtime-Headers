@class NSObject;
@protocol TFileSystemOperationDelegateProtocol;

@interface FI_TFileSystemOperation : FI_IAsyncNodeOperation

@property (weak, nonatomic) NSObject<TFileSystemOperationDelegateProtocol> *delegate;

+ (id)operationWithNodes:(const void *)a0 delegate:(id)a1;

- (int)cancelOperation;
- (id)initWithNodes:(const void *)a0;
- (id)makeDelegate;
- (int)startSuboperation:(unsigned int)a0 string:(id)a1 propertyList:(const struct TFENodePropertyList { struct OpaquePropertyListRef *x0; } *)a2;
- (void)configureOperationRecord:(struct TOperationRecord { struct OperationRecord { struct OpaqueNodeRef *x0; struct OpaqueNodeRef *x1; struct PropertyList *x2; unsigned int x3; unsigned int x4; struct HFSUniStr255 { unsigned short x0; unsigned short x1[255]; } x5; struct OpaqueNodeRef *x6; struct OpaqueNodeRef *x7; struct OpaqueNodeRef *x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; long long x13; long long x14; long long x15; long long x16; unsigned char x17; unsigned char x18; } x0; struct TFENode { struct OpaqueNodeRef *x0; } x1; struct TFENode { struct OpaqueNodeRef *x0; } x2; struct TFENode { struct OpaqueNodeRef *x0; } x3; } *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (int)startSuboperation:(unsigned int)a0 string:(id)a1 propertyList:(const struct TFENodePropertyList { struct OpaquePropertyListRef *x0; } *)a2 target:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a3;
- (id)initWithNodes:(const void *)a0 delegate:(id)a1;
- (int)uniqueNameProc:(id)a0 seedFileSuffix:(id)a1 reservedName:(id)a2;

@end
