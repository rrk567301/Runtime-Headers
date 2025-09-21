@interface AUAudioUnitViewConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) double width;
@property (readonly) double height;
@property (readonly) char hostHasController;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWidth:(double)a0 height:(double)a1 hostHasController:(char)a2;

@end
