@class NSString;

@interface WFShareSheetWorkflow : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned short glyphCharacter;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGImage { } *iconImage;
@property (readonly, nonatomic) double iconScale;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 glyphCharacter:(unsigned short)a2;
- (void)setIconImage:(struct CGImage { } *)a0 scale:(double)a1;

@end
