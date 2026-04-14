@class FINode;

@interface FINodeEvent : NSObject {
    struct TNodeEvent { unsigned int fEventKind; FINode *fFINode; unsigned int fProperty; struct TPropertyValue { union { BOOL boo; unsigned char cha; short i16; int i32; long long i64; unsigned int tos; struct Point { short v; short h; } tpt; struct UTCDateTime { unsigned short highSeconds; unsigned int lowSeconds; unsigned short fraction; } utc; struct OpaqueIconRef *icn; struct UniString { unsigned long long capacity; unsigned long long length; unsigned short *buffer; } str; struct Blob { unsigned int capacity; unsigned int length; char *buffer; } blo; struct RefCounted { int fReferenceCount; unsigned int fDataType; void *fReferenceCounted; void /* function */ *fRetainProc; void /* function */ *fReleaseProc; } referenceCounted; struct __CFString *string; struct __CFNumber *number; struct __CFData *data; struct __CFDictionary *dictionary; void *object; struct __CFURL *url; struct __CFArray *array; double absolutetime; struct __CFFileSecurity *filesec; char res[16]; } fData; unsigned int fDataType; } fPropertyValue; struct shared_ptr<TNodeTask> { struct TNodeTask *__ptr_; struct __shared_weak_count *__cntrl_; } fTask; struct TRef<TDSNotifier *, TInternalRefCountPolicy<TDSNotifier>> { struct TDSNotifier *fRef; } fNotifier; } _event;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init:(const void *)a0;

@end
