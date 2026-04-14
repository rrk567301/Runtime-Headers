@class NSString, NSImage, NSDictionary, NSNumber;

@interface PRSAlbum : NSObject

@property (retain, nonatomic) NSImage *albumArt;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *year;
@property (retain, nonatomic) NSDictionary *playInfo;
@property (nonatomic) BOOL playable;

+ (BOOL)isAlbum:(id)a0;

- (void).cxx_destruct;

@end
