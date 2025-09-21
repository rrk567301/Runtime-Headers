@class NSData;
@protocol APSTokenInfo;

@interface APSPerAppTokenMapEntry : NSObject

@property (retain, nonatomic) NSData *perAppToken;
@property (retain, nonatomic) id<APSTokenInfo> info;
@property (nonatomic) char flag;

- (id)description;
- (void).cxx_destruct;

@end
