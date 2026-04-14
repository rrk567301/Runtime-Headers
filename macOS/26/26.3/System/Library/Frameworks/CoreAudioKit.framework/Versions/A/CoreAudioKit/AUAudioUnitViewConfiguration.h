@interface AUAudioUnitViewConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double width;
@property (readonly) double height;
@property (readonly) BOOL hostHasController;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithWidth:(double)a0 height:(double)a1 hostHasController:(BOOL)a2;

@end
