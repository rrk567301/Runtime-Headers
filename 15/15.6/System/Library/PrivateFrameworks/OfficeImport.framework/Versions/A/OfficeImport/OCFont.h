@class OCFontSubfamily;

@interface OCFont : NSObject

@property (readonly, nonatomic) OCFontSubfamily *subfamily;
@property (nonatomic) char bold;
@property (nonatomic) char italic;

+ (id)fontWithSubfamily:(id)a0 bold:(char)a1 italic:(char)a2;

- (void).cxx_destruct;
- (id)initWithSubfamily:(id)a0 bold:(char)a1 italic:(char)a2;

@end
