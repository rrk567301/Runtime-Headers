@class NSData;

@interface APSPerAppTokenMapEntry : NSObject

@property (retain, nonatomic) NSData *perAppToken;
@property (nonatomic) BOOL flag;

- (id)description;
- (void).cxx_destruct;

@end
