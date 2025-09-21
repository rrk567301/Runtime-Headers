@class NSString, NSArray;
@protocol PTChoiceRowDataSource;

@interface PTChoiceRow : PTSRow

@property (weak, nonatomic) id<PTChoiceRowDataSource> dataSource;
@property (retain, nonatomic) NSString *choiceIdentifier;
@property (copy, nonatomic) NSArray *possibleValues;
@property (copy, nonatomic) NSArray *possibleTitles;
@property (copy, nonatomic) NSArray *possibleShortTitles;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;
- (id)indexPathForValue:(id)a0;
- (char)isEncodable;
- (id)possibleShortTitles:(id)a0;
- (id)possibleValues:(id)a0 titles:(id)a1;
- (id)shortTitleForRow:(long long)a0 inSection:(long long)a1;
- (id)titleForRow:(long long)a0 inSection:(long long)a1;
- (id)titleForSection:(long long)a0;
- (id)valueForRow:(long long)a0 inSection:(long long)a1;

@end
