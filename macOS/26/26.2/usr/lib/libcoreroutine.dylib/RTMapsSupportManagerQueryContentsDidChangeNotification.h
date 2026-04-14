@interface RTMapsSupportManagerQueryContentsDidChangeNotification : RTNotification

@property (readonly, nonatomic) long long queryType;

- (id)initWithQueryType:(long long)a0;
- (id)init;

@end
