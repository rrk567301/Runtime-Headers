@class NSString;

@interface FCLocalVersionedTag : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long minVersion;
@property (nonatomic) long long maxVersion;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
