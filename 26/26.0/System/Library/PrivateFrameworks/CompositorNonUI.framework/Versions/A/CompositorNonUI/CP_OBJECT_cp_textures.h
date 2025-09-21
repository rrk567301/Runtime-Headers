@class NSArray;

@interface CP_OBJECT_cp_textures : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *textures;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;

@end
