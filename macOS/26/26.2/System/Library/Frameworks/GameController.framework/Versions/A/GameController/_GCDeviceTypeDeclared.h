@class UTType;

@interface _GCDeviceTypeDeclared : GCDeviceType {
    UTType *_type;
}

- (id)identifier;
- (id)type;
- (void)dealloc;

@end
