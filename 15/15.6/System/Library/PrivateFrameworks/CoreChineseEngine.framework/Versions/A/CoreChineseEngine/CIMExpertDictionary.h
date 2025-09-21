@class NSString;

@interface CIMExpertDictionary : NSObject

@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *inputSourceIdentifier;
@property (copy, nonatomic) NSString *defaultsKey;
@property (nonatomic) char enabled;

+ (id)dictionaryWithDefaultsKey:(id)a0 enabled:(char)a1 inputSourceIdentifier:(id)a2;

- (void).cxx_destruct;
- (id)initWithDefaultsKey:(id)a0 enabled:(char)a1 inputSourceIdentifier:(id)a2;

@end
