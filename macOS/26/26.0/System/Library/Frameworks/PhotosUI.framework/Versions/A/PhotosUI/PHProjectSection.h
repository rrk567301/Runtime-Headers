@class NSArray, NSString;

@interface PHProjectSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *sectionContents;
@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) NSString *title;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description:(BOOL)a0;
- (id)initWithSectionType:(long long)a0 contents:(id)a1 title:(id)a2;

@end
