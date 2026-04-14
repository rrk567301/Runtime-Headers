@interface PXStoryHitTestResult : PXFeedHitTestResult

@property (readonly, nonatomic) long long clipIdentifier;

- (id)initWithSpriteIndex:(unsigned int)a0 layout:(id)a1 identifier:(id)a2;
- (id)clipIdentifier:(long long)a0;

@end
