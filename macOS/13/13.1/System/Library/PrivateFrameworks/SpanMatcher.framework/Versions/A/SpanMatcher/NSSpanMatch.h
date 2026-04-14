@class NSString;

@interface NSSpanMatch : NSObject

@property (retain, nonatomic) NSString *value;
@property (nonatomic) long long distance;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWith:(id)a0 distance:(long long)a1;

@end
