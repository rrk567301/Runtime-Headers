@class NSString;

@interface Exchange : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long status;
@property (nonatomic) double streamInterval;
@property (readonly, nonatomic) double lastUpdateTime;

+ (id)formattedExchangeNameForName:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithName:(id)a0;
- (id)archiveDictionary;
- (void)updateWithDictionary:(id)a0;
- (void)_updateWithDictionary:(id)a0 newUpdate:(BOOL)a1;
- (BOOL)marketIsAfterHours;
- (BOOL)marketIsOpen;

@end
