@class NSString;

@interface FCLocalVersionedTag : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long minVersion;
@property (nonatomic) long long maxVersion;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
