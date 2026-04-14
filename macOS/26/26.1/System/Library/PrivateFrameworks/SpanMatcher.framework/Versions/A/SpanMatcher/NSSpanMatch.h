@class NSString;

@interface NSSpanMatch : NSObject

@property (retain, nonatomic) NSString *value;
@property (nonatomic) long long distance;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWith:(id)a0 distance:(long long)a1;

@end
