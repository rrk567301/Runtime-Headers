@interface ACActivityPresentationDestination : NSObject

@property (readonly, nonatomic) long long destination;

- (id)initWithDestination:(long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
