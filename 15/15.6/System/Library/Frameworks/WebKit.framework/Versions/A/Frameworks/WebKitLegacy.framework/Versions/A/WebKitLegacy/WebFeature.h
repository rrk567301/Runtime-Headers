@class NSString;

@interface WebFeature : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *preferenceKey;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, copy, nonatomic) NSString *details;
@property (readonly, nonatomic) char defaultValue;
@property (readonly, nonatomic, getter=isHidden) char hidden;

- (void)dealloc;
- (id)description;
- (id)initWithKey:(id)a0 preferenceKey:(id)a1 name:(id)a2 status:(unsigned long long)a3 category:(unsigned long long)a4 details:(id)a5 defaultValue:(char)a6 hidden:(char)a7;

@end
