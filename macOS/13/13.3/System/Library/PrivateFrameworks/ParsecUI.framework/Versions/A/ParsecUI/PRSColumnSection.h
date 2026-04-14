@class NSArray;

@interface PRSColumnSection : NSObject

@property (retain, nonatomic) NSArray *text_lines;
@property (nonatomic) int text_weight;
@property (nonatomic) BOOL text_nowrap;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;

@end
