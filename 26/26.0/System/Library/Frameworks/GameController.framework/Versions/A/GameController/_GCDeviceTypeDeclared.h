@class UTType;

@interface _GCDeviceTypeDeclared : GCDeviceType {
    UTType *_type;
}

- (id)identifier;
- (void)dealloc;
- (id)type;

@end
