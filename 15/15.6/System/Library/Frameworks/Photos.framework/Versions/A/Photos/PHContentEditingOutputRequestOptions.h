@interface PHContentEditingOutputRequestOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isAsyncAdjustment) char asyncAdjustment;
@property (nonatomic, getter=isOnlyChangingOriginalChoice) char onlyChangingOriginalChoice;
@property (nonatomic) long long playbackStyle;
@property (nonatomic) char preferHEICForRenderedImages;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
