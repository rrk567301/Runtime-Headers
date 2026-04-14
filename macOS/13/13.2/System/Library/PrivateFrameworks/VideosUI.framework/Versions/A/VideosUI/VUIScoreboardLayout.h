@class VUIScoreboardRowLayout, VUITextLayout;

@interface VUIScoreboardLayout : NSObject

@property (nonatomic) struct _VUICornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } borderRadii;
@property (nonatomic) double padding;
@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUIScoreboardRowLayout *topRowLayout;
@property (retain, nonatomic) VUIScoreboardRowLayout *bottomRowLayout;

+ (id)scoreboardALayout;
+ (id)scoreboardBLayout;
+ (id)scoreboardCLayoutWithInnerMargin:(double)a0;
+ (id)_textColor:(long long)a0;
+ (int)_textBlendMode;

- (void).cxx_destruct;

@end
