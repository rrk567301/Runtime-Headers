@class NSArray, NSData;

@interface HDColumnCacheEntry : NSObject {
    NSArray *_swiftColumnDefinitions;
    NSData *_carrayStorage;
}

@property (readonly, nonatomic) const struct { id x0; id x1; unsigned char x2; } *columnDefinitions;
@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDefinitions:(id)a0;

@end
