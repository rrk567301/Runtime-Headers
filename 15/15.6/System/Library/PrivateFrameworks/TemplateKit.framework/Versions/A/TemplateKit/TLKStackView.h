@interface TLKStackView : NUIContainerStackView

@property (nonatomic) char isForcedToBeVertical;
@property (nonatomic) char flipsToVerticalAxisForAccessibilityContentSizes;

- (void)setAlignment:(long long)a0;
- (void)addArrangedSubview:(id)a0;
- (void)setAxis:(long long)a0;

@end
