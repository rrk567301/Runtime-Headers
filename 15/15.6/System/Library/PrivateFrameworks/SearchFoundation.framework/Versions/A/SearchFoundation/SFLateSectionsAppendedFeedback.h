@class NSArray;

@interface SFLateSectionsAppendedFeedback : SFFeedback <NSCopying>

@property (copy, nonatomic) NSArray *sections;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSections:(id)a0;

@end
