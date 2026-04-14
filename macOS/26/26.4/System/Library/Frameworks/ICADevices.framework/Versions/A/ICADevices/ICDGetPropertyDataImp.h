@interface ICDGetPropertyDataImp : ICDBaseCommandImp {
    struct ICD_GetPropertyDataPB { struct ICDHeader { short err; unsigned long long refcon; } header; unsigned int parentObject; struct ICAObjectInfo { unsigned int objectType; unsigned int objectSubtype; } parentObjectInfo; unsigned int connectionID; unsigned int property; struct ICAPropertyInfo { unsigned int propertyType; unsigned int dataType; unsigned int dataSize; unsigned int dataFlags; } propertyInfo; unsigned int startByte; unsigned int requestedSize; void *dataPtr; unsigned int actualSize; unsigned int dataType; } _getPropertyDataPB;
    BOOL _deleteAfterGetData;
}

- (id)process;
- (void)dealloc;
- (id)initWithPrivateData:(id)a0 commandData:(id)a1;

@end
