@class UTType;

@interface _GCDeviceTypeDeclared : GCDeviceType {
    UTType *_type;
}

- (id)type;
- (id)identifier;
- (void)dealloc;

@end
