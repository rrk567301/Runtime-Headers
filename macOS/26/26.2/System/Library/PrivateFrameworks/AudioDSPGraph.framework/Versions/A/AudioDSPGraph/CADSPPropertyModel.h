@interface CADSPPropertyModel : NSObject <NSCopying, NSMutableCopying> {
    struct PropertyModel { unsigned int ID; unsigned int direction; struct optional<std::vector<unsigned char>> { union { char __null_state_; struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct { char *__cap_; } ; } __val_; } ; BOOL __engaged_; } defaultValue; } _this;
}

@property (readonly, nonatomic) unsigned int ID;
@property (readonly, nonatomic) unsigned int direction;

- (unsigned int)ID;
- (unsigned int)direction;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)getDefaultValueBytes:(char *)a0 size:(unsigned long long *)a1;

@end
