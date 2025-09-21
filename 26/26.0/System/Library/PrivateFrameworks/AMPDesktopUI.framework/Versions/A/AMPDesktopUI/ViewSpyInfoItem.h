@class NSString;

@interface ViewSpyInfoItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) long long itemType;

+ (BOOL)supportsSecureCoding;
+ (id)newItem:(id)a0 withAttributedText:(id)a1;
+ (id)newItem:(id)a0 withText:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateFrom:(id)a0;

@end
