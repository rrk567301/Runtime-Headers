@class NSString;

@interface WLKSportImageDetails : NSObject

@property (readonly, nonatomic) char disableGradient;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) char isP3;
@property (readonly, copy, nonatomic) NSString *joeColor;
@property (readonly, nonatomic) char supportsLayeredImage;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, nonatomic) long long width;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
