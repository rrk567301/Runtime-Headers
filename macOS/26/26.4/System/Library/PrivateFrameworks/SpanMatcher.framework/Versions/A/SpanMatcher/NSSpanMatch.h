@class NSString;

@interface NSSpanMatch : NSObject

@property (retain, nonatomic) NSString *value;
@property (nonatomic) long long distance;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWith:(id)a0 distance:(long long)a1;

@end
