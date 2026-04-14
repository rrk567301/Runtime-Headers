@class NSString, NSArray;

@interface AVOfflineMediaStreamInfo : NSObject

@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSArray *segments;

- (void)dealloc;
- (id)initWithMediaType:(id)a0 segments:(id)a1;

@end
