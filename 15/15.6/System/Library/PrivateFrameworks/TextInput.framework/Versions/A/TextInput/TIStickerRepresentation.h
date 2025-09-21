@class NSData, NSString, UTType;

@interface TIStickerRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) UTType *uti;
@property (retain, nonatomic) NSString *role;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) long long effect;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 uti:(id)a1 role:(id)a2 size:(struct CGSize { double x0; double x1; })a3 effect:(long long)a4;

@end
