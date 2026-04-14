@class NSData;
@protocol APSTokenInfo;

@interface APSPerAppTokenMapEntry : NSObject

@property (retain, nonatomic) NSData *perAppToken;
@property (retain, nonatomic) id<APSTokenInfo> info;
@property (nonatomic) BOOL flag;

- (void).cxx_destruct;
- (id)description;

@end
