@class NSArray;

@interface SFLateSectionsAppendedFeedback : SFFeedback <NSCopying>

@property (copy, nonatomic) NSArray *sections;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSections:(id)a0;

@end
