@class NSDictionary, NSMutableDictionary;

@interface SKActionTable : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSDictionary *actionTableDictionary;
@property (retain, nonatomic) NSMutableDictionary *_info;

+ (id)actionTableWithContentsOfDictionary:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfDictionary:(id)a0;
- (id)actionForName:(id)a0;
- (char)isEqualToActionTable:(id)a0;

@end
