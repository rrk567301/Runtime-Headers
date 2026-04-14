@interface WAChanInfo : NSObject

@property short channel;
@property short band;
@property int simplifiedChannelFlags;

+ (id)chanInfoWithChannel:(short)a0 band:(short)a1;
+ (id)chanInfoWithObjectHavingChInfo:(id)a0 withPrefix:(id)a1;
+ (int)simplifiedChannelFlags:(short)a0;

- (id)description;
- (id)chanInfoDictionary;

@end
