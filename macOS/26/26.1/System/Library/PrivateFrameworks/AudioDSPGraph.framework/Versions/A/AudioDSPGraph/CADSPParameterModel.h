@interface CADSPParameterModel : NSObject <NSCopying, NSMutableCopying> {
    struct ParameterModel { unsigned int ID; unsigned int direction; struct optional<float> { union { char __null_state_; float __val_; } ; BOOL __engaged_; } defaultValue; } _this;
}

@property (readonly, nonatomic) unsigned int ID;
@property (readonly, nonatomic) unsigned int direction;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)direction;
- (unsigned int)ID;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)getDefaultValue:(float *)a0;

@end
