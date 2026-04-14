@interface CADSPParameterModel : NSObject <NSCopying, NSMutableCopying> {
    struct ParameterModel { unsigned int ID; unsigned int direction; struct optional<float> { union { char __null_state_; float __val_; } ; BOOL __engaged_; } defaultValue; } _this;
}

@property (readonly, nonatomic) unsigned int ID;
@property (readonly, nonatomic) unsigned int direction;

- (unsigned int)direction;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (unsigned int)ID;
- (BOOL)isEqual:(id)a0;
- (BOOL)getDefaultValue:(float *)a0;

@end
